/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapFailed
void Dino_BusSand_App_Meta_GameTracking__IapFailed (int32_t storeItemId, System_String_o* reason, System_String_o* errorCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapFailed
   void Dino_BusSand_App_Meta_GameTracking__IapFailed (int32_t storeItemId, System_String_o* reason,
   System_String_o* errorCode, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__IapFailed_22189dc
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd6c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04caad48);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cb26c0);
    FUN_02132f7c(PTR_DAT_04cb26c8);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cb26d0);
    FUN_02132f7c(PTR_DAT_04caa840);
    bRam0000000004f9bd6c = 1;
  }
  puVar1 = PTR_DAT_04caba90;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Meta_GameTracking__PackName_22174bc(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Meta_JourneyTracking__UiMark_22149d0(6,0,0,uVar3);
  Dino_BusSand_App_Meta_GameTracking__Price_22185a0(param_1,&uStack_38,&uStack_40);
  lVar4 = Dino_BusSand_App_Meta_GameTracking__IapParams_2218464(param_1);
  uStack_48 = uStack_38;
  uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x80),&uStack_48);
  if ((lVar4 != 0) &&
     (lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar4,*(undefined8 *)PTR_DAT_04cad1f8,uVar3,0), lVar4 != 0)) {
    lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar4,*(undefined8 *)PTR_DAT_04caa840,uStack_40,0);
    uVar5 = System_String__IsNullOrEmpty_46d2084(param_2,0);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)PTR_DAT_04cb26c0;
      uVar3 = *(undefined8 *)PTR_DAT_04caad48;
      if ((uVar5 & 1) == 0) {
        uVar3 = param_2;
      }
      lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar4,*(undefined8 *)PTR_DAT_04cb26c8,uVar3,0);
      uVar5 = System_String__IsNullOrEmpty_46d2084(param_3,0);
      puVar2 = PTR_DAT_04cb2240;
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)PTR_DAT_04ca9b60;
        if ((uVar5 & 1) == 0) {
          uVar3 = param_3;
        }
        uVar3 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                          (lVar4,*(undefined8 *)PTR_DAT_04cb26d0,uVar3,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(uVar6,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

