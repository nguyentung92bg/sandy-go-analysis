/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$UseProp
bool Dino_BusSand_App_UI_LevelEnterFlow__UseProp (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$UseProp
   bool Dino_BusSand_App_UI_LevelEnterFlow__UseProp (int32_t id, const MethodInfo* method); */

byte Dino_BusSand_App_UI_LevelEnterFlow__UseProp_233db60(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  byte abStack_44 [4];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_04cacb20;
  if ((bRam0000000004f9c66c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb94f0);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cace70);
    FUN_02132f7c(PTR_DAT_04caba30);
    FUN_02132f7c(PTR_DAT_04cb27d0);
    bRam0000000004f9c66c = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9c20;
  if ((*(char *)(*(long *)(lVar5 + 0xb8) + 8) == '\0') &&
     (**(char **)(*(long *)PTR_DAT_04cab380 + 0xb8) == '\0')) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    bVar4 = Dino_BusSand_App_Meta_Profile__TrySpend_2272968
                      (param_1,1,*(undefined8 *)PTR_DAT_04cace70,0);
  }
  else {
    bVar4 = 1;
  }
  plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar1,6);
  puVar1 = PTR_DAT_04cac768;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 0243dc6c to 0253dc73 has its CatchHandler @ 0243dd20 */
  if ((*(long *)PTR_DAT_04cac768 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar6 + 0x40)),
     lVar5 == 0)) {
LAB_0243deb0:
    uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar8,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = *(long *)puVar1;
                    /* try { // try from 0243dc98 to 0253dc9b has its CatchHandler @ 0243dd1c */
    thunk_FUN_02134474();
    puVar1 = PTR_DAT_04ca9ac8;
                    /* try { // try from 0243dc9c to 0253dd0f has its CatchHandler @ 0243db40 */
    uStack_34 = param_1;
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_0243deb0;
    puVar3 = PTR_DAT_04cb27d0;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar5;
      thunk_FUN_02134474(plVar6 + 5,lVar5);
      lVar5 = *(long *)puVar3;
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
      goto LAB_0243deb0;
                    /* try { // try from 0243dd10 to 0253dd13 has its CatchHandler @ 0243dd18 */
                    /* try { // try from 0243dd14 to 0253dd3b has its CatchHandler @ 0243db40 */
      if (2 < *(uint *)(plVar6 + 3)) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243dd10 with catch @ 0243dd18
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243dc98 with catch @ 0243dd1c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243dc6c with catch @ 0243dd20
                        */
        plVar6[6] = *(long *)puVar3;
        thunk_FUN_02134474();
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
                    /* try { // try from 0243dd3c to 0253dd3f has its CatchHandler @ 0243dd60 */
                    /* try { // try from 0243dd40 to 0253dd63 has its CatchHandler @ 0243db40 */
        auStack_38[0] = *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 8);
        lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x28),auStack_38);
                    /* catch() { ... } // from try @ 0243dd3c with catch @ 0243dd60 */
                    /* try { // try from 0243dd64 to 0253dd6b has its CatchHandler @ 0243dd74 */
                    /* try { // try from 0243dd6c to 0253dd77 has its CatchHandler @ 0243db40 */
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
        goto LAB_0243deb0;
        puVar2 = PTR_DAT_04caba30;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0243dd64 with catch @ 0243dd74
                        */
        if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
          plVar6[7] = lVar5;
          thunk_FUN_02134474(plVar6 + 7,lVar5);
          lVar5 = *(long *)puVar2;
          if ((lVar5 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
          goto LAB_0243deb0;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = *(long *)puVar2;
            thunk_FUN_02134474();
            abStack_44[0] = bVar4 & 1;
            lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x28),abStack_44);
            if ((lVar5 != 0) &&
               (lVar7 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_0243deb0;
            puVar1 = PTR_DAT_04cb94f0;
            puVar2 = PTR_DAT_04cac5c0;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar5;
              thunk_FUN_02134474(plVar6 + 9,lVar5);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar8 = Dino_BusSand_App_Analytics__L_216fff0(plVar6,0);
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar1,uVar8,0);
              return bVar4 & 1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

