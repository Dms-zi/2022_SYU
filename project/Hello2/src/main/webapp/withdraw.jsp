<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%> 
<%@ page import="core.*"%>
<%
request.setCharacterEncoding("utf-8");
String uid = request.getParameter("id");
UserDAO dao = new UserDAO();
if (dao.exists(uid) == false) {
out.print("ȸ�� ������ ã�� �� �����ϴ�.");
return;
}
if (dao.delete(uid)) {
out.print("ȸ�� Ż�� �Ϸ�Ǿ����ϴ�");
}
else {
out.print("ȸ�� Ż�� ó�� �� ������ �߻��Ͽ����ϴ�.");
}
%>