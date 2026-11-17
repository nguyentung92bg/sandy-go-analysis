/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$PlayerName
System_String_o* Dino_BusSand_App_Meta_YachtRacingFeature__PlayerName (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$PlayerName
   System_String_o* Dino_BusSand_App_Meta_YachtRacingFeature__PlayerName
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_YachtRacingFeature__PlayerName_225b944(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04cae570;
                    /* try { // try from 0235b948 to 0245b953 has its CatchHandler @ 0235b2f4 */
                    /* catch() { ... } // from try @ 0235b8f0 with catch @ 0235b950
                       catch() { ... } // from try @ 0235b940 with catch @ 0235b950 */
  if ((bRam0000000004f9c016 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c016 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0d1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  puVar4 = (undefined8 *)PTR_DAT_04ca9c30;
  if (lVar2 == 0) {
LAB_0235ba4c:
    return *puVar4;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
  if (lVar2 != 0) {
    uVar3 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar2 + 0x160),0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_PlayerIdentity__RandomName_226e084();
      Dino_BusSand_App_Meta_PlayerIdentity__SetPlayerNameRaw_226e300();
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar2 = Dino_BusSand_App_Meta_PlayerIdentity__get_D_226be2c();
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x160);
      goto LAB_0235ba4c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

