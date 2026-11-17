/* IL2CPP: Dino.BusSand.View.ArtPackData.Piece$$.ctor
void Dino_BusSand_View_ArtPackData_Piece___ctor (Dino_BusSand_View_ArtPackData_Piece_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.ArtPackData.Piece$$.ctor
   void Dino_BusSand_View_ArtPackData_Piece___ctor (Dino_BusSand_View_ArtPackData_Piece_o* __this,
   const MethodInfo* method); */

long Dino_BusSand_View_ArtPackData_Piece___ctor_2390c18(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (cRam0000000004f9b88b == '\0') {
    FUN_02132f7c(PTR_DAT_04cab4b0);
    cRam0000000004f9b88b = '\x01';
  }
  cVar1 = cRam0000000004f9b65e;
  uVar2 = **(undefined8 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
  *(undefined8 *)(param_1 + 0x3c) = (*(undefined8 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8))[1];
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  if (cVar1 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  uVar3 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14);
  *(undefined8 *)(param_1 + 0x44) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  return param_1;
}

