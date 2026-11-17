/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClaimAnimComplete
void Dino_BusSand_App_UI_YachtRacingPanel__OnClaimAnimComplete (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$OnClaimAnimComplete
   void Dino_BusSand_App_UI_YachtRacingPanel__OnClaimAnimComplete
   (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingPanel__OnClaimAnimComplete_21edb1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc02 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cad788);
                    /* try { // try from 022edb5c to 023edcd7 has its CatchHandler @ 022edd08 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1238);
    FUN_02132f7c(PTR_DAT_04cb10f8);
    FUN_02132f7c(PTR_DAT_04cb1240);
    bRam0000000004f9bc02 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  plVar8 = (long *)0x0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_022edd1c;
    plVar8 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(plVar8,0,0);
  if ((uVar3 & 1) != 0) {
    if (plVar8 == (long *)0x0) goto LAB_022edd1c;
    (**(code **)(*plVar8 + 0x2c8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x2d0));
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cb10f8,1,0);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0),
       lVar4 == 0)) goto LAB_022edd1c;
    UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
  }
  lVar4 = *(long *)puVar1;
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x90) = 1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  uVar7 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x88) == 0) {
LAB_022edd1c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022edd1c to 023edd6f has its CatchHandler @ 022eda4c */
      FUN_02133224();
    }
    uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                      (*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_04cada30);
  }
  puVar1 = PTR_DAT_04cb1240;
  puVar2 = PTR_DAT_04cb1238;
                    /* try { // try from 022edcd8 to 023edd17 has its CatchHandler @ 022eda4c */
  Dino_BusSand_App_UI_YachtRacingUi__PlayClip_21f8c34(uVar7,0,0);
  Dino_BusSand_App_UI_YachtRacingPanel__StartBounceLoop_21edd20(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022edb08 with catch @ 022edcf0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022edae0 with catch @ 022edcf8
                        */
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar1,0,0);
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022edb5c with catch @ 022edd08
                        */
  uVar7 = *(undefined8 *)puVar2;
                    /* try { // try from 022edd18 to 023edd1b has its CatchHandler @ 022edd6c */
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar7,1,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar7);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if ((lVar4 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar6 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
    if (pcRam0000000004fa8318 == (code *)0x0) {
      pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
    }
    uVar3 = (*pcRam0000000004fa8318)(lVar6);
    lVar4 = *(long *)puVar1;
    if (*(long *)(lVar4 + 0x38) == 0) {
      FUN_0216b4cc(lVar4);
    }
    if (uVar3 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar6 = *plVar8;
      }
      else {
        lVar6 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar3,0);
      }
      lVar4 = **(long **)(lVar4 + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0216b470(lVar4);
      }
      if (lVar6 != 0) {
        lVar5 = thunk_FUN_0216e7a0(lVar6,lVar4);
        if (lVar5 != 0) {
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar6,lVar4);
      }
    }
    return 0;
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

