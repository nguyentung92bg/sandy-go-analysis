/* IL2CPP: Dino.BusSand.App.UI.SettingRows.<>c$$<Build>b__0_5
void Dino_BusSand_App_UI_SettingRows___c___Build_b__0_5 (Dino_BusSand_App_UI_SettingRows___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingRows.<>c$$<Build>b__0_5
   void Dino_BusSand_App_UI_SettingRows___c___Build_b__0_5 (Dino_BusSand_App_UI_SettingRows___c_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_SettingRows___c___Build_b__0_5_231e358(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  byte abStack_24 [4];
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c5a0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb8860);
    FUN_02132f7c(PTR_DAT_04cb46e0);
    bRam0000000004f9c5a0 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_04caba50;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    bVar1 = *(byte *)(lVar4 + 0x5a);
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
                    /* try { // try from 0241e450 to 0251e5b7 has its CatchHandler @ 0241e450
                       catch() { ... } // from try @ 0241e450 with catch @ 0241e450
                       catch() { ... } // from try @ 0241e6b4 with catch @ 0241e450
                       catch() { ... } // from try @ 0241e6f4 with catch @ 0241e450
                       catch() { ... } // from try @ 0241e730 with catch @ 0241e450
                       catch() { ... } // from try @ 0241e754 with catch @ 0241e450 */
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04ca9c20;
    if (**(long **)(lVar4 + 0xb8) != 0) {
      Dino_BusSand_App_GameApp__SetVibration_2169fd8(**(long **)(lVar4 + 0xb8),bVar1 == 0,0);
      if (bVar1 == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(1,0);
      }
      plVar5 = (long *)FUN_02133068(*(undefined8 *)puVar2,2);
      puVar2 = PTR_DAT_04cb46e0;
      if (plVar5 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cb46e0 != 0) &&
           (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb46e0,*(undefined8 *)(*plVar5 + 0x40)),
           lVar4 == 0)) {
LAB_0241e5a8:
          uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar7,0);
        }
        if ((int)plVar5[3] != 0) {
          plVar5[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          abStack_24[0] = bVar1 ^ 1;
          lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),abStack_24);
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_0241e5a8;
          puVar3 = PTR_DAT_04cb8860;
          puVar2 = PTR_DAT_04cac5c0;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
            plVar5[5] = lVar4;
            thunk_FUN_02134474(plVar5 + 5,lVar4);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar3,plVar5,0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

