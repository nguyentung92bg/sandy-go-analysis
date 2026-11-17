/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow.<Run>d__1$$MoveNext
bool Dino_BusSand_App_UI_PostWinFlow__Run_d__1__MoveNext (Dino_BusSand_App_UI_PostWinFlow__Run_d__1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PostWinFlow.<Run>d__1$$MoveNext
   bool Dino_BusSand_App_UI_PostWinFlow__Run_d__1__MoveNext
   (Dino_BusSand_App_UI_PostWinFlow__Run_d__1_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_PostWinFlow__Run_d__1__MoveNext_231fc68(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000004f9c5a9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb21e8);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* catch() { ... } // from try @ 0241fc10 with catch @ 0241fcb0 */
    FUN_02132f7c(PTR_DAT_04cb5110);
                    /* try { // try from 0241fcb4 to 0251fcbb has its CatchHandler @ 0241fcc4 */
                    /* try { // try from 0241fcbc to 0251fcc7 has its CatchHandler @ 0241f63c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 0241fb68 with catch @ 0241fcc4
                       catch() { ... } // from try @ 0241fcb4 with catch @ 0241fcc4 */
    FUN_02132f7c(PTR_DAT_04cb8948);
    FUN_02132f7c(PTR_DAT_04cb8950);
    FUN_02132f7c(PTR_DAT_04cb8958);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caca88);
                    /* try { // try from 0241fd04 to 0251ff57 has its CatchHandler @ 0241fd04
                       catch() { ... } // from try @ 0241fd04 with catch @ 0241fd04
                       catch() { ... } // from try @ 02420114 with catch @ 0241fd04
                       catch() { ... } // from try @ 02420254 with catch @ 0241fd04
                       catch() { ... } // from try @ 024202d4 with catch @ 0241fd04 */
    FUN_02132f7c(PTR_DAT_04cb8960);
    FUN_02132f7c(PTR_DAT_04cb8968);
    FUN_02132f7c(PTR_DAT_04cb7410);
    FUN_02132f7c(PTR_DAT_04cb8970);
    bRam0000000004f9c5a9 = 1;
  }
  puVar2 = PTR_DAT_04caba50;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0241ff58 to 0251ff7f has its CatchHandler @ 02420294 */
        cRam0000000004f9b88f = '\x01';
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      uVar6 = **(undefined8 **)(lVar7 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
                    /* try { // try from 0241ffc4 to 0251ffeb has its CatchHandler @ 02420290 */
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
                    /* try { // try from 0241fff4 to 02520003 has its CatchHandler @ 024202a0 */
        if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02420078 to 02520083 has its CatchHandler @ 02420278 */
          FUN_02133224();
        }
        uVar3 = *(undefined4 *)(**(long **)(lVar7 + 0xb8) + 0x44);
      }
      puVar2 = PTR_DAT_04cb5110;
                    /* try { // try from 02420008 to 02520013 has its CatchHandler @ 02420280 */
      *(undefined4 *)(param_1 + 0x30) = uVar3;
                    /* try { // try from 02420014 to 0252001f has its CatchHandler @ 02420288 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_KitPop__HoldDim_228ee9c(0);
                    /* try { // try from 0242002c to 02520037 has its CatchHandler @ 02420284 */
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                    /* try { // try from 02420038 to 02520043 has its CatchHandler @ 0242027c */
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20390,uVar6,0);
                    /* try { // try from 0242004c to 02520057 has its CatchHandler @ 02420270 */
      *(undefined8 *)(param_1 + 0x18) = uVar6;
                    /* try { // try from 02420058 to 02520063 has its CatchHandler @ 02420260 */
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = Dino_BusSand_App_Meta_WinChest__get_Ready_220d8f8(0);
    if ((uVar5 & 1) != 0) {
      uVar6 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                        (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb8968,0,
                         *(undefined8 *)PTR_DAT_04cb8948);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      uVar3 = 2;
      goto LAB_0241fe30;
    }
LAB_0241fdcc:
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_04cb21e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Meta_DailyGift__Available_220e1d4(uVar3,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                        (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb8960,0,
                         *(undefined8 *)PTR_DAT_04cb8950);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      uVar3 = 3;
LAB_0241fe30:
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      return 1;
    }
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_0241fdcc;
    }
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_0241ff00;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  uVar5 = Dino_BusSand_App_Meta_StarterOffer__get_PopupDue_220ca94(0);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = Dino_BusSand_App_Meta_OfferScheduler__get_CanShowPopup_220c644(0), (uVar5 & 1) != 0))
  {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac440);
    }
    uVar4 = Dino_BusSand_App_Meta_Economy__GoNextLevelDirectly_220486c(uVar3,0);
    Dino_BusSand_App_Meta_OfferScheduler__Count_220c70c((uVar4 ^ 0xffffffff) & 1,0);
    uVar6 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb7410,
                       *(undefined8 *)PTR_DAT_04cb8970,*(undefined8 *)PTR_DAT_04cb8958);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
    *(undefined4 *)(param_1 + 0x10) = 4;
    return 1;
  }
LAB_0241ff00:
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
  }
                    /* try { // try from 0242006c to 02520077 has its CatchHandler @ 02420264 */
  return 0;
}

