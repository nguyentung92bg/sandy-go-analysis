/* IL2CPP: Dino.BusSand.App.GameApp$$HasHeartOrRefill
bool Dino_BusSand_App_GameApp__HasHeartOrRefill (Dino_BusSand_App_GameApp_o* __this, System_Action_o* retry, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$HasHeartOrRefill
   bool Dino_BusSand_App_GameApp__HasHeartOrRefill (Dino_BusSand_App_GameApp_o* __this,
   System_Action_o* retry, const MethodInfo* method); */

uint Dino_BusSand_App_GameApp__HasHeartOrRefill_21643c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cac418;
  if ((bRam0000000004f9b860 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac428);
    FUN_02132f7c(PTR_DAT_04cac418);
    bRam0000000004f9b860 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp___c__DisplayClass92_0___ctor_216b3bc(lVar3,0);
  puVar1 = PTR_DAT_04caba50;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x10),param_2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
    if ((uVar2 & 1) == 0) {
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(uVar4,lVar3,*(undefined8 *)PTR_DAT_04cac428,0);
      Dino_BusSand_App_GameApp__OpenPowerBuy_2165d9c(param_1,1,uVar4);
    }
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

