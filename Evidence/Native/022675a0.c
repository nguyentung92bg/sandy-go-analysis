/* IL2CPP: Dino.BusSand.App.GameApp$$get_RateUsDue
bool Dino_BusSand_App_GameApp__get_RateUsDue (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$get_RateUsDue
   bool Dino_BusSand_App_GameApp__get_RateUsDue (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__get_RateUsDue_21675a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar7;
  
  puVar1 = PTR_DAT_04cabaf8;
                    /* try { // try from 022675b8 to 023675bb has its CatchHandler @ 022675fc */
  if ((bRam0000000004f9b867 & 1) == 0) {
                    /* try { // try from 022675bc to 02367613 has its CatchHandler @ 02267498 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9b867 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  puVar1 = PTR_DAT_04cac458;
  uVar6 = 0;
  if ((bRam0000000004f9c281 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8,0);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb5c10);
    bRam0000000004f9c281 = 1;
    uVar6 = extraout_x1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
    uVar6 = extraout_x1_00;
  }
  puVar1 = PTR_DAT_04cabaf8;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 3) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar6 = extraout_x1_01;
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8,uVar6);
      cRam0000000004f9b894 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(*(undefined8 *)PTR_DAT_04cb5c10,0);
      puVar2 = PTR_DAT_04cac7b8;
      if ((((uVar5 & 1) == 0) && (*(int *)(lVar7 + 0xec) < 3)) &&
         ((iVar3 == 0xb ||
          (((0x67 < iVar3 &&
            (((uint)((iVar3 + -0x68) * -0x3d70a3d7) >> 2 | iVar3 * 0x40000000) < 0x28f5c29)) ||
           (*(char *)(lVar7 + 0xf0) != '\0')))))) {
        lVar4 = *(long *)PTR_DAT_04cac7b8;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = **(long **)(lVar4 + 0xb8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        if (*(char *)(lVar7 + 0xf0) == '\0') {
          lVar4 = *(long *)puVar1;
          *(undefined1 *)(lVar7 + 0xf0) = 1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        }
      }
    }
  }
  return 0;
}

