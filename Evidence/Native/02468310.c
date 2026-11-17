/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_2
System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_2 (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_2
   System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_2
   (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_2_2368310(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c781 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cb9ad8);
    FUN_02132f7c(PTR_DAT_04cae4e8);
    bRam0000000004f9c781 = 1;
  }
  puVar2 = PTR_DAT_04cb9ad8;
  puVar1 = PTR_DAT_04cad978;
  if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = System_Int64__ToString_482ec3c
                    (*(long *)(param_1 + 0x100) + 0x18,*(undefined8 *)PTR_DAT_04cae4e8,0);
  uVar6 = System_String__Concat_46d2b84(*(undefined8 *)puVar1,uVar6,*(undefined8 *)puVar2,0);
  if ((bRam0000000004f9c743 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba558);
    FUN_02132f7c(PTR_DAT_04cba870);
    FUN_02132f7c(PTR_DAT_04cba660);
    FUN_02132f7c(PTR_DAT_04cb2000);
    bRam0000000004f9c743 = 1;
  }
  puVar3 = PTR_DAT_04cba660;
  puVar2 = PTR_DAT_04cba558;
  puVar1 = PTR_DAT_04cb2000;
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar4 = Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4(*(long *)(param_1 + 0x100),3);
    uVar6 = System_String__Concat_46d30e8(uVar6,*(undefined8 *)puVar3,uVar4,*(undefined8 *)puVar1,0)
    ;
    lVar8 = *(long *)puVar2;
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_0216b4cc(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0216b470();
    }
    uVar5 = UnityEngine_GUILayout__Button_440f190(uVar6,uVar4,**(undefined8 **)(lVar7 + 0xb8),0);
    uStack_38 = 0;
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
      System_Nullable_Int32Enum____ctor_2bcbf5c(&uStack_38,3,*(undefined8 *)PTR_DAT_04cba870);
      uVar6 = uStack_38;
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

