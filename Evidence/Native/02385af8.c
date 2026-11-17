/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Count
Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Count (TMPro_TMP_Text_o* text, int64_t from, int64_t to, float duration, float delay, System_Func_long__string__o* format, System_Action_float__o* onStep, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Count
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Count (TMPro_TMP_Text_o* text, int64_t
   from, int64_t to, float duration, float delay, System_Func_long__string__o* format,
   System_Action_float__o* onStep, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiMotion__Count_2285af8
               (undefined4 param_1,float param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar1 = PTR_DAT_04cb4ef8;
  if ((bRam0000000004f9c1c5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
                    /* try { // try from 02385b54 to 02485f5b has its CatchHandler @ 02385b54
                       catch() { ... } // from try @ 02385b54 with catch @ 02385b54
                       catch() { ... } // from try @ 02385f88 with catch @ 02385b54
                       catch() { ... } // from try @ 02385fd4 with catch @ 02385b54
                       catch() { ... } // from try @ 02386040 with catch @ 02385b54 */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb4e48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb4f00);
    FUN_02132f7c(PTR_DAT_04cb4f08);
    FUN_02132f7c(PTR_DAT_04cb4f10);
    FUN_02132f7c(PTR_DAT_04cb4ef8);
    FUN_02132f7c(PTR_DAT_04cb4f18);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1c5 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0___ctor_22a1a40(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)(lVar2 + 0x10);
    *puVar8 = param_3;
    thunk_FUN_02134474(puVar8,param_3);
    *(undefined8 *)(lVar2 + 0x18) = param_4;
    *(undefined8 *)(lVar2 + 0x20) = param_5;
    plVar9 = (long *)(lVar2 + 0x30);
    *plVar9 = param_6;
    thunk_FUN_02134474(plVar9,param_6);
    *(undefined8 *)(lVar2 + 0x38) = param_7;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38),param_7);
    uVar11 = *puVar8;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
    puVar1 = PTR_DAT_04cb4f18;
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar12 = *plVar9;
    if (lVar12 == 0) {
      lVar4 = *(long *)PTR_DAT_04cb4f18;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      puVar7 = *(undefined8 **)(lVar4 + 0xb8);
      lVar12 = puVar7[1];
      if (lVar12 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar11 = *puVar7;
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4e48);
        System_Func_long__object____ctor_37a2ae8(lVar12,uVar11,*(undefined8 *)PTR_DAT_04cb4f00,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar5 = lVar12;
        thunk_FUN_02134474(plVar5,lVar12);
      }
    }
    *plVar9 = lVar12;
    thunk_FUN_02134474(plVar9,lVar12);
    uVar11 = *puVar8;
    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Tween__KillAll_2161a90(uVar11,0);
    lVar12 = *plVar9;
    if (lVar12 != 0) {
      plVar9 = (long *)*puVar8;
      uVar11 = (**(code **)(lVar12 + 0x18))
                         (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar2 + 0x18),
                          *(undefined8 *)(lVar12 + 0x28));
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x518))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x520));
        uVar11 = *(undefined8 *)PTR_DAT_04cac208;
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar2 + 0x18);
        uVar11 = thunk_FUN_0216e89c(uVar11);
        System_Action_float____ctor_35f1448(uVar11,lVar2,*(undefined8 *)PTR_DAT_04cb4f08,0);
        uVar10 = *(undefined8 *)(lVar2 + 0x10);
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cb4f10,0);
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04cac1e8;
        if ((bRam0000000004f9c1bd & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa210);
          FUN_02132f7c(PTR_DAT_04cb4ce0);
          FUN_02132f7c(PTR_DAT_04cac1e8);
          bRam0000000004f9c1bd = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar2 = Dino_BusSand_App_Tween__Value_2160f64(param_1,uVar11,0);
        if (((lVar2 != 0) &&
            (lVar2 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar2,1,0), lVar2 != 0)) &&
           (lVar2 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar2,uVar10,0), lVar2 != 0)) {
          lVar2 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar2,uVar6,0);
          if (0.0 < param_2) {
            if (lVar2 == 0) goto LAB_02390cdc;
            Dino_BusSand_App_Tween__SetDelay_2160ea8(param_2,lVar2,0);
          }
          if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Application__get_isPlaying_4351eec(0);
          puVar1 = PTR_DAT_04cb4ce0;
          if ((uVar3 & 1) != 0) {
            lVar12 = *(long *)PTR_DAT_04cb4ce0;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar1;
            }
            if (*(char *)(*(long *)(lVar12 + 0xb8) + 1) == '\0') {
              return lVar2;
            }
          }
          if (lVar2 != 0) {
            Dino_BusSand_App_Tween__Kill_2160f04(lVar2,1,0);
            return lVar2;
          }
        }
LAB_02390cdc:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

