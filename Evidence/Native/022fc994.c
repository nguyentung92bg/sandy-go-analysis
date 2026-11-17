/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$Covers
bool Dino_BusSand_App_UI_ScreenCover__Covers (Dino_BusSand_App_UI_ScreenCover_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$Covers
   bool Dino_BusSand_App_UI_ScreenCover__Covers (Dino_BusSand_App_UI_ScreenCover_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ScreenCover__Covers_21fc994(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float in_s3;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022fc9b4 to 023fc9c3 has its CatchHandler @ 022fca48 */
  if ((bRam0000000004f9bc6e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadf40);
                    /* try { // try from 022fc9d0 to 023fc9db has its CatchHandler @ 022fca38 */
    FUN_02132f7c(PTR_DAT_04cb19f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc6e = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 022fc9f0 to 023fc9f3 has its CatchHandler @ 022fca34 */
                    /* try { // try from 022fc9f4 to 023fce83 has its CatchHandler @ 022fc984 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_022fcbe0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(*(long *)(param_1 + 0x20),0);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_022fcbe0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc9f0 with catch @ 022fca34
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc9d0 with catch @ 022fca38
                        */
      (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      if (1.0 <= in_s3) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc9b4 with catch @ 022fca48
                        */
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_022fcbe0;
        uVar7 = UnityEngine_UI_Graphic__get_canvas_44aa85c(*(long *)(param_1 + 0x20),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
        if ((uVar3 & 1) == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_022fcbe0;
            if (*(char *)(*(long *)(param_1 + 0x28) + 0x2c) == '\0') {
              uVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                                (param_1,*(undefined8 *)PTR_DAT_04cb19f0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar1);
              }
              uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
              if ((uVar3 & 1) == 0) {
                lVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                puVar2 = PTR_DAT_04cadf40;
                while( true ) {
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
                  if ((uVar3 & 1) == 0) {
                    return 1;
                  }
                  if (lVar5 == 0) break;
                  lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                                    (lVar5,*(undefined8 *)puVar2);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar1);
                  }
                  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
                  if ((uVar3 & 1) == 0) {
                    if (lVar6 == 0) break;
                    uVar3 = UnityEngine_Behaviour__get_enabled_43bc458(lVar6,0);
                    if ((uVar3 & 1) != 0) {
                      fVar8 = (float)UnityEngine_CanvasGroup__get_alpha_467ac88(lVar6,0);
                      if (fVar8 < 1.0) {
                        return 0;
                      }
                      uVar3 = UnityEngine_CanvasGroup__get_ignoreParentGroups_467b100(lVar6,0);
                      if ((uVar3 & 1) != 0) {
                        return 1;
                      }
                    }
                  }
                  lVar5 = UnityEngine_Transform__get_parent_43d0d70(lVar5,0);
                }
                goto LAB_022fcbe0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

