<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%> 
<%@ page import="dao.*"%>
<%
request.setCharacterEncoding("utf-8");
String uid = request.getParameter("id");
UserDAO dao = new UserDAO();
boolean code =dao.delete(uid);
if (code==true) {
out.print("OK"); 
}
else if(code==false){
out.print("NA");
}
else{
out.print("ER");
}
%>