/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnPassportPurchased
void Dino_BusSand_App_Meta_PassportFeature__OnPassportPurchased (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$OnPassportPurchased
   void Dino_BusSand_App_Meta_PassportFeature__OnPassportPurchased
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__OnPassportPurchased_224a49c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0234a4d0 to 0244a4d3 has its CatchHandler @ 0234a8f4 */
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
                    /* try { // try from 0234a4f8 to 0244a4ff has its CatchHandler @ 0234a8ec */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caef48);
                    /* try { // try from 0234a510 to 0244a523 has its CatchHandler @ 0234a908 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb25f0);
    bRam0000000004f9bf8c = 1;
  }
                    /* try { // try from 0234a530 to 0244a537 has its CatchHandler @ 0234a8e4 */
                    /* try { // try from 0234a538 to 0244a53f has its CatchHandler @ 0234a8e0 */
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar4)
  ;
  if (lVar5 != 0) {
                    /* try { // try from 0234a540 to 0244a547 has its CatchHandler @ 0234a8dc */
                    /* try { // try from 0234a548 to 0244a54b has its CatchHandler @ 0234a8d8 */
    *(undefined1 *)(lVar5 + 0x1c) = 1;
    *(undefined1 *)(lVar5 + 0x61) = 1;
    if (*(long *)(lVar5 + 0x38) != 0) {
                    /* try { // try from 0234a568 to 0244a56b has its CatchHandler @ 0234a8d0 */
      uVar6 = System_Collections_Generic_List_int___Contains_3a2c3ec
                        (*(long *)(lVar5 + 0x38),0,*(undefined8 *)PTR_DAT_04cad860);
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 0234a570 to 0244a57b has its CatchHandler @ 0234a8d4 */
        lVar5 = *(long *)(lVar5 + 0x38);
        if (lVar5 == 0) goto LAB_0234a760;
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)PTR_DAT_04caa160;
                    /* try { // try from 0234a590 to 0244a623 has its CatchHandler @ 0234a914 */
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0234a760;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      puVar4 = PTR_DAT_04caef48;
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                (param_1,*(undefined8 *)PTR_DAT_04cb0558);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar4;
      }
      puVar3 = PTR_DAT_04caba50;
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 0234a63c to 0244a647 has its CatchHandler @ 0234a934 */
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0234a64c to 0244a653 has its CatchHandler @ 0234a928 */
        cRam0000000004f9b88f = '\x01';
      }
      puVar2 = PTR_DAT_04ca9ae8;
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar3;
      }
                    /* try { // try from 0234a670 to 0244a673 has its CatchHandler @ 0234a918 */
      lVar7 = *(long *)puVar2;
                    /* try { // try from 0234a678 to 0244a683 has its CatchHandler @ 0234a924 */
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
      }
                    /* try { // try from 0234a698 to 0244a74b has its CatchHandler @ 0234a930 */
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if (lVar5 == 0) goto LAB_0234a760;
        if (*(char *)(lVar5 + 0x38) != '\0') {
          uVar9 = *(undefined8 *)(lVar5 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(long *)(lVar5 + 0x20) == 0) goto LAB_0234a760;
            if (*(int *)(*(long *)(lVar5 + 0x20) + 0x20) == 3) {
              if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_Profile__Add_2272578(0x2715,1,*(undefined8 *)PTR_DAT_04cb25f0,0)
              ;
              lVar5 = *(long *)puVar4;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar5 = *(long *)puVar4;
              }
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
              if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0234a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                return;
              }
            }
          }
        }
      }
                    /* try { // try from 0234a758 to 0244a7df has its CatchHandler @ 0234a934 */
      return;
    }
  }
LAB_0234a760:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

