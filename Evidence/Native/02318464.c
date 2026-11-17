/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapParams
Dino_BusSand_App_Meta_TrackingPlan_Params_o* Dino_BusSand_App_Meta_GameTracking__IapParams (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapParams
   Dino_BusSand_App_Meta_TrackingPlan_Params_o* Dino_BusSand_App_Meta_GameTracking__IapParams
   (int32_t storeItemId, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GameTracking__IapParams_2218464(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2678);
    FUN_02132f7c(PTR_DAT_04cb2680);
    FUN_02132f7c(PTR_DAT_04cb2690);
    FUN_02132f7c(PTR_DAT_04caa870);
    bRam0000000004f9bd68 = 1;
  }
  puVar2 = PTR_DAT_04cb2240;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_GameTracking__IapContext_2217308();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar4 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  if ((((lVar3 != 0) && (lVar4 != 0)) &&
      (lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                         (lVar4,*(undefined8 *)PTR_DAT_04caa870,*(undefined8 *)(lVar3 + 0x10),0),
      lVar4 != 0)) &&
     (lVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar4,*(undefined8 *)PTR_DAT_04cb2678,*(undefined8 *)(lVar3 + 0x18),0),
     lVar4 != 0)) {
    lVar3 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar4,*(undefined8 *)PTR_DAT_04cb2690,*(undefined8 *)(lVar3 + 0x20),0);
    uVar5 = Dino_BusSand_App_Meta_GameTracking__PackName_22174bc(param_1);
    puVar1 = PTR_DAT_04ca9b58;
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)PTR_DAT_04cb2680;
      if ((bRam0000000004f9c1d6 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9b58,uVar6,uVar5,0);
        bRam0000000004f9c1d6 = 1;
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar3,uVar6,uVar5,*(undefined8 *)puVar1);
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

