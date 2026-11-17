/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Tutorial
void Dino_BusSand_App_Meta_GameTracking__Tutorial (System_String_o* cate, System_String_o* name, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$Tutorial
   void Dino_BusSand_App_Meta_GameTracking__Tutorial (System_String_o* cate, System_String_o* name,
   int32_t index, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__Tutorial_2218ce8
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04cb2240;
  if ((bRam0000000004f9bd6f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb26d8);
    FUN_02132f7c(PTR_DAT_04cb26e0);
    FUN_02132f7c(PTR_DAT_04cb26e8);
    FUN_02132f7c(PTR_DAT_04cb26f0);
    bRam0000000004f9bd6f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
  if ((lVar2 != 0) &&
     (lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar2,*(undefined8 *)PTR_DAT_04cb26d8,param_1,0), lVar2 != 0)) {
    lVar2 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                      (lVar2,*(undefined8 *)PTR_DAT_04cb26e0,param_2,0);
    uStack_34 = param_3;
    uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    puVar1 = PTR_DAT_04cb26e8;
    if (lVar2 != 0) {
      uVar3 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                        (lVar2,*(undefined8 *)PTR_DAT_04cb26f0,uVar3,0);
      Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar1,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

