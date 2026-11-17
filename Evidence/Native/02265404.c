/* IL2CPP: Dino.BusSand.App.GameApp$$OnApplicationPause
void Dino_BusSand_App_GameApp__OnApplicationPause (Dino_BusSand_App_GameApp_o* __this, bool paused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OnApplicationPause
   void Dino_BusSand_App_GameApp__OnApplicationPause (Dino_BusSand_App_GameApp_o* __this, bool
   paused, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__OnApplicationPause_2165404(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_DAT_04cac498;
  if ((bRam0000000004f9b858 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cac518);
    FUN_02132f7c(PTR_DAT_04cac520);
    FUN_02132f7c(PTR_DAT_04cac528);
    FUN_02132f7c(PTR_DAT_04cabbd0);
    FUN_02132f7c(PTR_DAT_04cac530);
    FUN_02132f7c(PTR_DAT_04cac538);
    bRam0000000004f9b858 = 1;
  }
  puVar1 = (undefined8 *)PTR_DAT_04cac538;
  puVar5 = PTR_DAT_04cac528;
  puVar3 = PTR_DAT_04cac450;
  puVar2 = PTR_DAT_04cabbd0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)puVar5;
  }
  Dino_BusSand_App_Meta_GameTracking__AppPause_2215124(param_2 & 1,0);
  uVar8 = *(undefined8 *)puVar2;
  uVar9 = *puVar1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_CrashContext__Step_216db44(uVar8,uVar9,0);
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x3a) != '\0') {
      if (*(char *)(param_1 + 0x38) != '\0') {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)(param_1 + 0x20);
          if (lVar7 == 0) {
LAB_02265720:
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if ((*(int *)(lVar7 + 0x20) == 2) &&
             (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar7,0),
             lVar7 != 0)) {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (lVar7 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                                  (*(long *)(param_1 + 0x20),0), lVar7 == 0)) goto LAB_02265720;
            if (*(char *)(lVar7 + 0x80) == '\0') {
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar6 = Dino_BusSand_App_Meta_GameTracking__ExternalUiRecently_221505c(0x40000000,0);
              if ((uVar6 & 1) == 0) {
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_02265720;
                uVar6 = Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84
                                  (*(long *)(param_1 + 0x28),0);
                if ((uVar6 & 1) == 0) {
                  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02265720;
                  uVar6 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                    (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac518);
                  if ((uVar6 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar6 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
                    if ((uVar6 & 1) == 0) {
                    /* try { // try from 02265654 to 023656e7 has its CatchHandler @ 02265654
                       catch() { ... } // from try @ 02265654 with catch @ 02265654
                       catch() { ... } // from try @ 022656f8 with catch @ 02265654
                       catch() { ... } // from try @ 022657e0 with catch @ 02265654 */
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_02265720;
                      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac530,2,0,
                                 *(undefined8 *)PTR_DAT_04cac520);
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar6 = Dino_BusSand_App_Meta_Session__OnResume_220fc98(*(undefined8 *)(param_1 + 0x70),0);
      puVar4 = PTR_DAT_04cac458;
      if (((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x39) != '\0')) {
        lVar7 = *(long *)PTR_DAT_04cac458;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar4;
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 5) == '\0') {
          lVar7 = *(long *)(param_1 + 0x88);
          if (lVar7 != 0) {
            UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar7,0);
          }
          uVar8 = Dino_BusSand_App_UI_HomeQueue__Run_23200c4(param_1,0,0);
                    /* try { // try from 022656e8 to 023656f7 has its CatchHandler @ 02265838 */
          uVar8 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar8,0);
                    /* try { // try from 022656f8 to 02365767 has its CatchHandler @ 02265654 */
          *(undefined8 *)(param_1 + 0x88) = uVar8;
          thunk_FUN_02134474((long *)(param_1 + 0x88),uVar8);
        }
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__Save_226c548(0);
    uVar8 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
  }
  return;
}

