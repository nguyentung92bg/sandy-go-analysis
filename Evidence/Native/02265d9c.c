/* IL2CPP: Dino.BusSand.App.GameApp$$OpenPowerBuy
void Dino_BusSand_App_GameApp__OpenPowerBuy (Dino_BusSand_App_GameApp_o* __this, int32_t count, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OpenPowerBuy
   void Dino_BusSand_App_GameApp__OpenPowerBuy (Dino_BusSand_App_GameApp_o* __this, int32_t count,
   System_Action_bool__o* done, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__OpenPowerBuy_2165d9c(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9b87b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac5a8);
    FUN_02132f7c(PTR_DAT_04cac5b0);
    bRam0000000004f9b87b = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_24 = param_2;
  uVar2 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar4 != 0) {
    lVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (lVar4,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar2,*(undefined8 *)PTR_DAT_04cac5a8
                      );
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x18))
                  (*(undefined8 *)(param_3 + 0x40),0,*(undefined8 *)(param_3 + 0x28));
      }
    }
    else {
      if (lVar4 == 0) goto LAB_02265ea8;
      *(long *)(lVar4 + 0x38) = param_3;
      thunk_FUN_02134474((long *)(lVar4 + 0x38),param_3);
    }
    return;
  }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

