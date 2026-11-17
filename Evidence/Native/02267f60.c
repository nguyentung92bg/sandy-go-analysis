/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveWithCoins
bool Dino_BusSand_App_GameApp__ReviveWithCoins (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveWithCoins
   bool Dino_BusSand_App_GameApp__ReviveWithCoins (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__ReviveWithCoins_2167f60(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04cac440;
  if ((bRam0000000004f9b86b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabb38);
    FUN_02132f7c(PTR_DAT_04cac740);
    bRam0000000004f9b86b = 1;
  }
                    /* try { // try from 02267fcc to 02367fdb has its CatchHandler @ 02268100 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = Dino_BusSand_App_Meta_Economy__get_RevivePrice_220499c(0);
  uVar4 = Dino_BusSand_App_Meta_Economy__get_CanRevive_2204a44(0);
  puVar2 = PTR_DAT_04cac740;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_Meta_Profile__TrySpend_2272968
                      (0x3e9,(long)iVar3,*(undefined8 *)puVar2,0);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x58);
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar2 = PTR_DAT_04cabb38;
      Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0
                (uVar1,*(undefined8 *)PTR_DAT_04cabb38,iVar3,0,0);
                    /* try { // try from 02268068 to 0236807b has its CatchHandler @ 022680f8 */
      Dino_BusSand_App_GameApp__CompleteRevive_21681b0(param_1,*(undefined8 *)puVar2);
      return 1;
    }
    Dino_BusSand_App_GameApp__OpenStore_2168098(param_1,1);
  }
  return 0;
}

