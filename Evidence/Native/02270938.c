/* IL2CPP: Dino.BusSand.App.GameApp.<OfferSoftUpdate>d__89$$MoveNext
bool Dino_BusSand_App_GameApp__OfferSoftUpdate_d__89__MoveNext (Dino_BusSand_App_GameApp__OfferSoftUpdate_d__89_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<OfferSoftUpdate>d__89$$MoveNext
   bool Dino_BusSand_App_GameApp__OfferSoftUpdate_d__89__MoveNext
   (Dino_BusSand_App_GameApp__OfferSoftUpdate_d__89_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_GameApp__OfferSoftUpdate_d__89__MoveNext_2170938(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_24;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270868 with catch @ 02270940
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022708c0 with catch @ 02270944
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270884 with catch @ 02270948
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270918 with catch @ 0227094c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022708ec with catch @ 02270950
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227091c with catch @ 02270954
                        */
  if ((bRam0000000004f9b8a9 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022707f8 with catch @ 02270958
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022707c8 with catch @ 0227095c
                        */
                    /* try { // try from 02270960 to 02370967 has its CatchHandler @ 02270970 */
    FUN_02132f7c(PTR_DAT_04cac570);
                    /* try { // try from 02270968 to 02370973 has its CatchHandler @ 02270794 */
    FUN_02132f7c(PTR_DAT_04cacc38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270960 with catch @ 02270970
                        */
    FUN_02132f7c(PTR_DAT_04cac588);
    FUN_02132f7c(PTR_DAT_04cac598);
    bRam0000000004f9b8a9 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(float *)(param_1 + 0x28) < 30.0) goto LAB_022709cc;
    if (lVar3 == 0) goto LAB_02270aa4;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_022709cc:
    if (lVar3 == 0) goto LAB_02270aa4;
    uVar1 = Dino_BusSand_App_GameApp___OfferSoftUpdate_g__Ready_89_0_216a278(lVar3,0);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 022709e0 to 02370a13 has its CatchHandler @ 022709e0
                       catch(type#1 @ 00000000) { ... } // from try @ 022709e0 with catch @ 022709e0
                       catch(type#1 @ 00000000) { ... } // from try @ 02270ad8 with catch @ 022709e0
                        */
      fVar5 = *(float *)(param_1 + 0x28);
      fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      *(float *)(param_1 + 0x28) = fVar5 + fVar4;
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* try { // try from 02270a14 to 02370a23 has its CatchHandler @ 02270acc */
  uVar1 = Dino_BusSand_App_GameApp___OfferSoftUpdate_g__Ready_89_0_216a278(lVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(lVar3 + 0x28) == 0) {
LAB_02270aa4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(lVar3 + 0x28),*(undefined8 *)PTR_DAT_04cacc38);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 02270a44 to 02370a4b has its CatchHandler @ 02270ac8 */
      lVar3 = *(long *)(lVar3 + 0x28);
      uStack_24 = 1;
      uVar2 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac570,&uStack_24);
      if (lVar3 == 0) goto LAB_02270aa4;
      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                (lVar3,*(undefined8 *)PTR_DAT_04cac598,2,uVar2,*(undefined8 *)PTR_DAT_04cac588);
    }
  }
                    /* try { // try from 02270aa0 to 02370aa7 has its CatchHandler @ 02270ac4 */
  return 0;
}

