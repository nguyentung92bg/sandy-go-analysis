/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveFromActivity
void Dino_BusSand_App_GameApp__ReviveFromActivity (Dino_BusSand_App_GameApp_o* __this, int32_t buses, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp$$ReviveFromActivity
   void Dino_BusSand_App_GameApp__ReviveFromActivity (Dino_BusSand_App_GameApp_o* __this, int32_t
   buses, const MethodInfo* method); */

void Dino_BusSand_App_GameApp__ReviveFromActivity_2168b58(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9b871 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cac770);
    FUN_02132f7c(PTR_DAT_04cac778);
    FUN_02132f7c(PTR_DAT_04cac780);
    FUN_02132f7c(PTR_DAT_04cac798);
    bRam0000000004f9b871 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
              (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar2 = Dino_BusSand_App_Gameplay_GameplayController__TryCompleteRevive_229f824
                        (*(long *)(param_1 + 0x20),param_2,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Economy__OnReviveSuccess_2204db4(0);
      uVar3 = *(undefined8 *)PTR_DAT_04ca9c20;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      plVar4 = (long *)FUN_02133068(uVar3,4);
      puVar1 = PTR_DAT_04cac768;
      if (plVar4 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cac768 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar4 + 0x40)),
           lVar5 == 0)) {
LAB_02268df8:
          uVar3 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar3,0);
        }
        if ((int)plVar4[3] != 0) {
          plVar4[4] = *(long *)puVar1;
          thunk_FUN_02134474();
          puVar1 = PTR_DAT_04cac798;
          if ((*(long *)PTR_DAT_04cac798 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac798,*(undefined8 *)(*plVar4 + 0x40)),
             lVar5 == 0)) goto LAB_02268df8;
          if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
            plVar4[5] = *(long *)puVar1;
            thunk_FUN_02134474();
            puVar1 = PTR_DAT_04cac780;
            if ((*(long *)PTR_DAT_04cac780 != 0) &&
               (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac780,*(undefined8 *)(*plVar4 + 0x40)
                                          ), lVar5 == 0)) goto LAB_02268df8;
            if (2 < *(uint *)(plVar4 + 3)) {
              plVar4[6] = *(long *)puVar1;
              thunk_FUN_02134474();
              uStack_24 = param_2;
              lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
                    /* try { // try from 02268d48 to 02368dc3 has its CatchHandler @ 02268d48
                       catch(type#1 @ 00000000) { ... } // from try @ 02268d48 with catch @ 02268d48
                       catch(type#1 @ 00000000) { ... } // from try @ 02268dd0 with catch @ 02268d48
                        */
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
              goto LAB_02268df8;
              if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
                plVar4[7] = lVar5;
                thunk_FUN_02134474(plVar4 + 7,lVar5);
                if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar3 = Dino_BusSand_App_Analytics__L_216fff0(plVar4,0);
                Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cac778,uVar3,0);
                if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
                    /* try { // try from 02268dc4 to 02368dcf has its CatchHandler @ 02268e50 */
                  thunk_FUN_0218fdac();
                }
                    /* try { // try from 02268dd0 to 02368e67 has its CatchHandler @ 02268d48 */
                Dino_BusSand_App_Audio__PlayMusic_214db34
                          (_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac770);
                return;
              }
            }
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

