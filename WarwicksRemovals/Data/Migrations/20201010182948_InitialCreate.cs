using Microsoft.EntityFrameworkCore.Migrations;

namespace WarwicksRemovals.Data.Migrations
{
    public partial class InitialCreate : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "RemovalQuote",
                columns: table => new
                {
                    RemovalQuoteID = table.Column<int>(nullable: false)
                        .Annotation("SqlServer:Identity", "1, 1"),
                    Title = table.Column<string>(maxLength: 20, nullable: true),
                    Forename = table.Column<string>(maxLength: 50, nullable: false),
                    Surname = table.Column<string>(maxLength: 50, nullable: false),
                    Company = table.Column<string>(maxLength: 100, nullable: true),
                    MoveDate = table.Column<string>(maxLength: 100, nullable: false),
                    TelNumber = table.Column<string>(maxLength: 15, nullable: true),
                    TelExtension = table.Column<int>(nullable: false),
                    Mobile = table.Column<string>(maxLength: 15, nullable: true),
                    Email = table.Column<string>(maxLength: 200, nullable: true),
                    FromAddress1 = table.Column<string>(maxLength: 200, nullable: false),
                    FromAddress2 = table.Column<string>(maxLength: 200, nullable: true),
                    FromAddress3 = table.Column<string>(maxLength: 200, nullable: true),
                    FromAddress4 = table.Column<string>(maxLength: 200, nullable: true),
                    FromPostcode = table.Column<string>(maxLength: 8, nullable: false),
                    FromPropertyType = table.Column<int>(nullable: false),
                    FromNumBedrooms = table.Column<int>(nullable: false),
                    IsMovingToStorage = table.Column<bool>(nullable: false),
                    ToAddress1 = table.Column<string>(maxLength: 200, nullable: true),
                    ToAddress2 = table.Column<string>(maxLength: 200, nullable: true),
                    ToAddress3 = table.Column<string>(maxLength: 200, nullable: true),
                    ToAddress4 = table.Column<string>(maxLength: 200, nullable: true),
                    ToPostcode = table.Column<string>(maxLength: 8, nullable: true),
                    ToPropertyType = table.Column<int>(nullable: false),
                    ToNumBedrooms = table.Column<int>(nullable: false),
                    Comments = table.Column<string>(maxLength: 1000, nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_RemovalQuote", x => x.RemovalQuoteID);
                });

            migrationBuilder.CreateTable(
                name: "SelectListData",
                columns: table => new
                {
                    Code = table.Column<string>(maxLength: 10, nullable: false),
                    Description = table.Column<string>(maxLength: 255, nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_SelectListData", x => x.Code);
                });
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "RemovalQuote");

            migrationBuilder.DropTable(
                name: "SelectListData");
        }
    }
}
