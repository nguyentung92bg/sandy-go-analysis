/* IL2CPP: Dino.BusSand.View.PackPalette$$Find
Dino_BusSand_View_ArtPackData_Swatch_o* Dino_BusSand_View_PackPalette__Find (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$Find
   Dino_BusSand_View_ArtPackData_Swatch_o* Dino_BusSand_View_PackPalette__Find (System_String_o*
   name, const MethodInfo* method); */

long Dino_BusSand_View_PackPalette__Find_238fe88(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c8bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfd0);
    FUN_02132f7c(PTR_DAT_04cbbfd8);
    FUN_02132f7c(PTR_DAT_04cbbfe0);
    FUN_02132f7c(PTR_DAT_04cbbff0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8bd = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  lVar2 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar2,0,0);
  lVar4 = 0;
  if ((param_1 != 0) && ((uVar3 & 1) == 0)) {
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x108) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,*(long *)(lVar2 + 0x108),*(undefined8 *)PTR_DAT_04cbbff0);
    puVar1 = PTR_DAT_04cbbfd8;
    do {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar1);
      lVar4 = lStack_28;
      if ((uVar3 & 1) == 0) {
        lVar4 = 0;
        break;
      }
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = System_String__op_Equality_46d1108(*(undefined8 *)(lStack_28 + 0x10),param_1,0);
    } while ((uVar3 & 1) == 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cbbfd0);
  }
  return lVar4;
}

