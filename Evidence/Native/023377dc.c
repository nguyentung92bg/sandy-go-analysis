/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnItemChanged
void Dino_BusSand_App_Meta_GiftPackFeature__OnItemChanged (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$OnItemChanged
   void Dino_BusSand_App_Meta_GiftPackFeature__OnItemChanged
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__OnItemChanged_22377dc(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_58;
  
  puVar1 = PTR_DAT_04cabaf8;
                    /* try { // try from 023377f8 to 024377ff has its CatchHandler @ 023379d8 */
  if ((bRam0000000004f9beb1 & 1) == 0) {
                    /* try { // try from 02337818 to 0243785b has its CatchHandler @ 023379fc */
    FUN_02132f7c(PTR_DAT_04cb2da0);
    FUN_02132f7c(PTR_DAT_04cb2d98);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cb34d0);
    FUN_02132f7c(PTR_DAT_04cb34d8);
    FUN_02132f7c(PTR_DAT_04cb34e0);
    FUN_02132f7c(PTR_DAT_04cb34e8);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9beb1 = 1;
  }
                    /* try { // try from 0233789c to 024378c3 has its CatchHandler @ 023379e4 */
  lStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  if (param_2 == 0x3ea) {
    return;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x10) == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02337904 to 0243792b has its CatchHandler @ 023379f0 */
  lVar5 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_2,0);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 0233792c to 024379b3 has its CatchHandler @ 02337700 */
    bVar4 = System_Collections_Generic_Dictionary_int__long___TryGetValue_34356a4
                      (*(long *)(param_1 + 0x30),param_2,&lStack_58,*(undefined8 *)PTR_DAT_04cb2da0)
    ;
    if (*(long *)(param_1 + 0x30) != 0) {
      System_Collections_Generic_Dictionary_int__long___set_Item_3433c2c
                (*(long *)(param_1 + 0x30),param_2,lVar5,*(undefined8 *)PTR_DAT_04cb2d98);
      puVar1 = PTR_DAT_04cac668;
      if ((bVar4 & lVar5 < lStack_58) == 1) {
        lVar6 = *(long *)PTR_DAT_04cac668;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar6 + 0xb8) + 8) != '\0') {
          Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
          lVar6 = lStack_58;
                    /* try { // try from 023379b4 to 024379b7 has its CatchHandler @ 023379fc */
                    /* try { // try from 023379b8 to 024379bb has its CatchHandler @ 02337700 */
                    /* try { // try from 023379bc to 024379bf has its CatchHandler @ 023379f0 */
          if (*(int *)(*(long *)PTR_DAT_04caec48 + 0xe4) == 0) {
                    /* try { // try from 023379c0 to 024379c3 has its CatchHandler @ 023379fc */
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 023379c4 to 024379cb has its CatchHandler @ 023379e4 */
          lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
          puVar1 = PTR_DAT_04cb3390;
                    /* try { // try from 023379cc to 024379d7 has its CatchHandler @ 023379fc */
                    /* catch() { ... } // from try @ 023377f8 with catch @ 023379d8
                       try { // try from 023379d8 to 02437a1b has its CatchHandler @ 02337700 */
                    /* catch() { ... } // from try @ 023377a4 with catch @ 023379dc */
          lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                            (param_1,*(undefined8 *)PTR_DAT_04cb3390);
          puVar2 = PTR_DAT_04cb34d0;
                    /* catch() { ... } // from try @ 023377c4 with catch @ 023379e0 */
          if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 0233789c with catch @ 023379e4
                       catch() { ... } // from try @ 023379c4 with catch @ 023379e4 */
            lVar9 = *(long *)(lVar8 + 0x60);
                    /* catch() { ... } // from try @ 02337904 with catch @ 023379f0
                       catch() { ... } // from try @ 023379bc with catch @ 023379f0 */
            lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb34d0);
                    /* catch() { ... } // from try @ 02337818 with catch @ 023379fc
                       catch() { ... } // from try @ 023379b4 with catch @ 023379fc
                       catch() { ... } // from try @ 023379c0 with catch @ 023379fc
                       catch() { ... } // from try @ 023379cc with catch @ 023379fc */
            System_Object___ctor_4870e5c(lVar8,0);
            if (lVar8 != 0) {
              *(int *)(lVar8 + 0x18) = param_2;
                    /* try { // try from 02337a1c to 02437a1f has its CatchHandler @ 02337a28 */
                    /* catch() { ... } // from try @ 02337a1c with catch @ 02337a28 */
              *(double *)(lVar8 + 0x20) = (double)(lVar6 - lVar5);
                    /* try { // try from 02337a30 to 02437a37 has its CatchHandler @ 02337a9c */
              *(long *)(lVar8 + 0x10) = lVar7 / 1000;
              puVar3 = PTR_DAT_04cb34d8;
                    /* try { // try from 02337a38 to 02437a4f has its CatchHandler @ 02337700 */
              if (lVar9 != 0) {
                    /* try { // try from 02337a50 to 02437a53 has its CatchHandler @ 02337a58 */
                FUN_01e77d34(lVar9,lVar8,*(undefined8 *)PTR_DAT_04cb34d8);
                    /* catch() { ... } // from try @ 02337a50 with catch @ 02337a58 */
                lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                  (param_1,*(undefined8 *)puVar1);
                    /* try { // try from 02337a60 to 02437a67 has its CatchHandler @ 02337a9c */
                    /* try { // try from 02337a68 to 02437a7f has its CatchHandler @ 02337700 */
                if ((lVar8 != 0) && (*(long *)(lVar8 + 0x60) != 0)) {
                  if (200 < *(int *)(*(long *)(lVar8 + 0x60) + 0x18)) {
                    /* try { // try from 02337a80 to 02437a83 has its CatchHandler @ 02337a88 */
                    lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                      (param_1,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 02337a80 with catch @ 02337a88 */
                    /* try { // try from 02337a8c to 02437a93 has its CatchHandler @ 02337a9c */
                    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x60) == 0)) goto LAB_02337b34;
                    /* try { // try from 02337a94 to 02437a9f has its CatchHandler @ 02337700 */
                    /* catch() { ... } // from try @ 02337a30 with catch @ 02337a9c
                       catch() { ... } // from try @ 02337a60 with catch @ 02337a9c
                       catch() { ... } // from try @ 02337a8c with catch @ 02337a9c */
                    /* catch() { ... } // from try @ 02337aac with catch @ 02337aa0
                       catch() { ... } // from try @ 02337ae4 with catch @ 02337aa0
                       catch() { ... } // from try @ 02337b18 with catch @ 02337aa0 */
                    System_Collections_Generic_List_object___RemoveAt_3a833a0
                              (*(long *)(lVar8 + 0x60),0,*(undefined8 *)PTR_DAT_04cb34e0);
                  }
                    /* try { // try from 02337aa8 to 02437aab has its CatchHandler @ 02337ab4 */
                  if (param_2 != 0x3e9) {
LAB_02337afc:
                    /* try { // try from 02337b00 to 02437b0f has its CatchHandler @ 02337b10 */
                    Dino_BusSand_App_Meta_GiftPackFeature__EvaluateAllPacks_22368ec(param_1);
                    /* catch() { ... } // from try @ 02337acc with catch @ 02337b10
                       catch() { ... } // from try @ 02337b00 with catch @ 02337b10 */
                    /* try { // try from 02337b14 to 02437b17 has its CatchHandler @ 02337b20 */
                    Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                              (param_1,*(undefined8 *)PTR_DAT_04caefe8);
                    return;
                  }
                    /* try { // try from 02337aac to 02437acb has its CatchHandler @ 02337aa0 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02337aa8 with catch @ 02337ab4
                        */
                  lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                    (param_1,*(undefined8 *)puVar1);
                  if (lVar8 != 0) {
                    lVar9 = *(long *)(lVar8 + 0x58);
                    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 02337acc to 02437ae3 has its CatchHandler @ 02337b10 */
                    System_Object___ctor_4870e5c(lVar8,0);
                    if (lVar8 != 0) {
                      *(long *)(lVar8 + 0x10) = lVar7 / 1000;
                      *(undefined4 *)(lVar8 + 0x18) = 0x3e9;
                    /* try { // try from 02337ae4 to 02437aff has its CatchHandler @ 02337aa0 */
                      *(double *)(lVar8 + 0x20) = (double)(lVar6 - lVar5);
                      if (lVar9 != 0) {
                        FUN_01e77d34(lVar9,lVar8,*(undefined8 *)puVar3);
                        goto LAB_02337afc;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_02337b34;
        }
      }
                    /* try { // try from 02337b18 to 02437b23 has its CatchHandler @ 02337aa0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02337b14 with catch @ 02337b20
                        */
                    /* try { // try from 02337b24 to 02437b3b has its CatchHandler @ 02337b24
                       catch() { ... } // from try @ 02337b24 with catch @ 02337b24
                       catch() { ... } // from try @ 02337b68 with catch @ 02337b24
                       catch() { ... } // from try @ 02337bb0 with catch @ 02337b24
                       catch() { ... } // from try @ 02337bf4 with catch @ 02337b24 */
      return;
    }
  }
LAB_02337b34:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

