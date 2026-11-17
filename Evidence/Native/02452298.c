/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Play>d__52$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__Play_d__52__MoveNext (Dino_BusSand_Cheat_AutoQa__Play_d__52_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<Play>d__52$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__Play_d__52__MoveNext (Dino_BusSand_Cheat_AutoQa__Play_d__52_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoQa__Play_d__52__MoveNext_2352298(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  float fVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c712 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caba68);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac580);
    FUN_02132f7c(PTR_DAT_04cac6f0);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb9f08);
    FUN_02132f7c(PTR_DAT_04cb9f10);
    FUN_02132f7c(PTR_DAT_04cb9f18);
    FUN_02132f7c(PTR_DAT_04cb9f20);
    FUN_02132f7c(PTR_DAT_04cb9f28);
    bRam0000000004f9c712 = 1;
  }
  puVar2 = PTR_DAT_04cb9568;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = 0;
  uStack_34 = 0;
  if (1 < iVar1) {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar10 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
      lVar3 = 0;
      if (lVar10 != 0) {
        Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                  (lVar10,*(undefined8 *)PTR_DAT_04cac6f0);
        lVar10 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
        lVar3 = 0;
        if (lVar10 != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (lVar10,*(undefined8 *)PTR_DAT_04cac580);
          uVar4 = Dino_BusSand_Cheat_AutoQa__Frames_2342f28(5);
          *(undefined8 *)(param_1 + 0x18) = uVar4;
          thunk_FUN_02134474();
          lVar3 = 1;
          uVar9 = 3;
          goto LAB_02452730;
        }
      }
      goto LAB_02452748;
    }
    if (iVar1 != 3) {
      return 0;
    }
    uVar9 = 0xffffffff;
    goto LAB_02452730;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_02452748;
    Dino_BusSand_Cheat_AutoQa__KeepHearts_23423b4(lVar10);
    uVar9 = *(undefined4 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__SetLevel_22735a8(uVar9,0);
    if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
    lVar3 = 0;
    if (lVar7 == 0) goto LAB_02452748;
    Dino_BusSand_App_GameApp__EnterLevel_21644c8(lVar7,0,0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(lVar10 + 0x28) = 0;
LAB_0245254c:
    puVar2 = PTR_DAT_04cb9568;
    if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
    lVar3 = 0;
    if (lVar7 == 0) {
LAB_02452748:
                    /* WARNING: Subroutine does not return */
      FUN_02133224(lVar3);
    }
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0(lVar7,*(undefined8 *)PTR_DAT_04cac6f0);
    lVar7 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
    lVar3 = 0;
    if (lVar7 == 0) goto LAB_02452748;
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0(lVar7,*(undefined8 *)PTR_DAT_04cac580);
    uVar4 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
      lVar3 = 0;
      if (lVar7 == 0) goto LAB_02452748;
      if (*(int *)(lVar7 + 0x20) == 2) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
        if (lVar3 == 0) goto LAB_02452748;
        if (*(int *)(lVar3 + 0x28) == *(int *)(param_1 + 0x28)) {
          if (lVar10 == 0) goto LAB_02452748;
          *(undefined1 *)(lVar10 + 0x28) = 1;
          goto LAB_024526f4;
        }
      }
    }
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3e800000,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    uVar9 = 1;
    lVar3 = 1;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar11 = *(float *)(param_1 + 0x2c) + 0.25;
    *(float *)(param_1 + 0x2c) = fVar11;
    if (fVar11 < 15.0) goto LAB_0245254c;
    if (lVar10 == 0) goto LAB_02452748;
    if (*(char *)(lVar10 + 0x28) == '\0') {
      uVar4 = System_Int32__ToString_482d750(param_1 + 0x28,0);
      uVar4 = System_String__Concat_46d2b84
                        (*(undefined8 *)PTR_DAT_04cb9f08,uVar4,*(undefined8 *)PTR_DAT_04cb9f10,0);
      puVar2 = PTR_DAT_04cb9568;
      if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb9568);
      }
      uVar5 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar6 & 1) == 0) {
        uVar5 = *(undefined8 *)PTR_DAT_04cb9f20;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
        lVar3 = 0;
        if (lVar7 == 0) goto LAB_02452748;
        uStack_40 = *(undefined4 *)(lVar7 + 0x20);
        uStack_50 = *(undefined8 *)PTR_DAT_04caba68;
        uStack_48 = 0xffffffffffffffff;
        uVar5 = System_Enum__ToString_4863070(&uStack_50,0);
        lVar7 = Dino_BusSand_Cheat_AutoQa__get_Gc_2340f5c();
        lVar3 = 0;
        if (lVar7 == 0) goto LAB_02452748;
        uStack_34 = *(undefined4 *)(lVar7 + 0x28);
        uVar8 = System_Int32__ToString_482d750(&uStack_34,0);
        uVar5 = System_String__Concat_46d30e8
                          (*(undefined8 *)PTR_DAT_04cb9f28,uVar5,*(undefined8 *)PTR_DAT_04cb9f18,
                           uVar8,0);
      }
      Dino_BusSand_Cheat_AutoQa__Add_23430d8(lVar10,0,uVar4,uVar5);
    }
LAB_024526f4:
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e200f8,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    lVar3 = 1;
    uVar9 = 2;
  }
LAB_02452730:
  *(undefined4 *)(param_1 + 0x10) = uVar9;
  return lVar3;
}

