/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$Target
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_BoosterFly__Target (int32_t id, bool* home, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BoosterFly$$Target
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_BoosterFly__Target (int32_t id, bool* home,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_BoosterFly__Target_217fcf0(undefined4 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04caba50;
                    /* try { // try from 0227fcf4 to 0237fd3f has its CatchHandler @ 0227fc84 */
  if ((bRam0000000004f9b91e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* catch() { ... } // from try @ 0227fce8 with catch @ 0227fd2c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac748);
    FUN_02132f7c(PTR_DAT_04cad558);
    bRam0000000004f9b91e = 1;
  }
  *param_2 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (lVar3 == 0) {
LAB_0227ffdc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224(uVar5);
  }
  if (*(char *)(lVar3 + 0x39) == '\0') {
    lVar3 = *(long *)(lVar3 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    lVar7 = 0;
    if ((uVar5 & 1) != 0) {
      if (lVar3 == 0) goto LAB_0227ffdc;
      lVar7 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(lVar3,param_1,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if (lVar7 != 0) {
        lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
        uVar5 = 0;
        if (lVar3 != 0) {
          uVar5 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar3,0);
          if ((uVar5 & 1) != 0) {
            return lVar7;
          }
          return 0;
        }
      }
      goto LAB_0227ffdc;
    }
  }
  else {
    lVar3 = Dino_BusSand_App_GameApp__get_Home_2169a38(lVar3,0);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
    uVar5 = 0;
    if ((uVar4 & 1) == 0) {
      if (lVar3 == 0) goto LAB_0227ffdc;
      uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar3,0);
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)(lVar3 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = 0;
          if (*(long *)(lVar3 + 0x38) != 0) {
            lVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x38),0);
            uVar5 = 0;
            if (lVar6 != 0) {
              uVar5 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar6,0);
              if ((uVar5 & 1) == 0) {
                return 0;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
              if ((uVar5 & 1) != 0) {
                if (lVar7 == 0) goto LAB_0227ffdc;
                uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                  (lVar7,*(undefined8 *)PTR_DAT_04cad558);
                if (((uVar5 & 1) != 0) ||
                   (uVar5 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                      (lVar7,*(undefined8 *)PTR_DAT_04cac748), (uVar5 & 1) != 0)) {
                  return 0;
                }
              }
              *param_2 = 1;
              return *(long *)(lVar3 + 0x38);
            }
          }
          goto LAB_0227ffdc;
        }
      }
    }
  }
  return 0;
}

