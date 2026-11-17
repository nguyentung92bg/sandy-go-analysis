/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$KeysOf
System_String_o* Dino_BusSand_Cheat_CheatConfig__KeysOf (Dino_BusSand_Cheat_CheatConfig_o* __this, int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$KeysOf
   System_String_o* Dino_BusSand_Cheat_CheatConfig__KeysOf (Dino_BusSand_Cheat_CheatConfig_o*
   __this, int32_t a, const MethodInfo* method); */

long Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000004f9c726 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba3b0);
    FUN_02132f7c(PTR_DAT_04cba3b8);
    FUN_02132f7c(PTR_DAT_04cba3c0);
    FUN_02132f7c(PTR_DAT_04cba3f0);
    FUN_02132f7c(PTR_DAT_04cba428);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c726 = 1;
  }
  puVar5 = PTR_DAT_04cba428;
  puVar4 = PTR_DAT_04cba3b8;
  puVar3 = PTR_DAT_04cba3b0;
  puVar2 = PTR_DAT_04ca9c30;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar8 = *(long *)PTR_DAT_04ca9c30;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_68,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_04cba3f0);
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_68,*(undefined8 *)puVar4);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_68,*(undefined8 *)puVar3);
        return lVar8;
      }
      if (lStack_58 == 0) break;
      if ((*(char *)(lStack_58 + 0x2c) != '\0') && (*(int *)(lStack_58 + 0x24) == param_2)) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar1 = *(int *)(lVar8 + 0x10);
        uVar9 = *(undefined8 *)puVar5;
        uVar10 = *(undefined8 *)puVar2;
        uVar7 = Dino_BusSand_Cheat_CheatBinding__Label_2359820();
        if (iVar1 < 1) {
          uVar9 = uVar10;
        }
        lVar8 = System_String__Concat_46d2b84(lVar8,uVar9,uVar7,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

