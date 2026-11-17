/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Log
void Dino_BusSand_Cheat_CheatManager__Log (System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Log
   void Dino_BusSand_Cheat_CheatManager__Log (System_String_o* text, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__Log_235c924(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_44;
  
  puVar3 = PTR_DAT_04cac868;
  puVar2 = PTR_DAT_04cab330;
  if ((bRam0000000004f9c77b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caba68);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cab330);
    FUN_02132f7c(PTR_DAT_04cba478);
    FUN_02132f7c(PTR_DAT_04cba480);
    FUN_02132f7c(PTR_DAT_04cab2b8);
    FUN_02132f7c(PTR_DAT_04cba488);
    FUN_02132f7c(PTR_DAT_04cabf00);
    bRam0000000004f9c77b = 1;
  }
  uVar9 = *(undefined8 *)puVar2;
  uStack_44 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar2 = PTR_DAT_04cabaf8;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04caba50;
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    lVar8 = *(long *)puVar1;
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_0245ccb8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x38) != '\0') {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar4 != 0) {
            uStack_44 = *(undefined4 *)(lVar4 + 0x28);
            uVar9 = System_Int32__ToString_482d750(&uStack_44,0);
            uStack_50 = *(undefined4 *)(lVar4 + 0x20);
            uStack_60 = *(undefined8 *)PTR_DAT_04caba68;
            uStack_58 = 0xffffffffffffffff;
            uVar7 = System_Enum__ToString_4863070(&uStack_60,0);
            uVar9 = System_String__Concat_46d30e8
                              (uVar9,*(undefined8 *)PTR_DAT_04cabf00,uVar7,
                               *(undefined8 *)PTR_DAT_04cab2b8,0);
            goto LAB_0245cc4c;
          }
          goto LAB_0245ccb8;
        }
      }
    }
    puVar3 = PTR_DAT_04cba478;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_44 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    uVar9 = System_Int32__ToString_482d750(&uStack_44,0);
    uVar9 = System_String__Concat_46c82e0(uVar9,*(undefined8 *)puVar3,0);
  }
LAB_0245cc4c:
  puVar2 = PTR_DAT_04ca9af8;
  uVar9 = System_String__Concat_46d30e8
                    (*(undefined8 *)PTR_DAT_04cba480,param_1,*(undefined8 *)PTR_DAT_04cba488,uVar9,0
                    );
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  UnityEngine_Debug__Log_4360fc8(uVar9,0);
  return;
}

