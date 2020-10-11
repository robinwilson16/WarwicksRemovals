using Microsoft.EntityFrameworkCore.Migrations;

namespace WarwicksRemovals.Data.Migrations
{
    public partial class SelectListDataChangePrimaryKey : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropPrimaryKey(
                name: "PK_SelectListData",
                table: "SelectListData");

            migrationBuilder.AddPrimaryKey(
                name: "PK_SelectListData",
                table: "SelectListData",
                columns: new[] { "Code", "Domain" });
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropPrimaryKey(
                name: "PK_SelectListData",
                table: "SelectListData");

            migrationBuilder.AddPrimaryKey(
                name: "PK_SelectListData",
                table: "SelectListData",
                column: "Code");
        }
    }
}
