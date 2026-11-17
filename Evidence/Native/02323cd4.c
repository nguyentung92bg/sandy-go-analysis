/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleTrack$$Reward
void Dino_BusSand_App_Meta_BattleRoyaleTrack__Reward (int32_t roundNo, int32_t winnerCnt, System_Collections_Generic_List_KeyValuePair_int__long___o* reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleTrack$$Reward
   void Dino_BusSand_App_Meta_BattleRoyaleTrack__Reward (int32_t roundNo, int32_t winnerCnt,
   System_Collections_Generic_List_KeyValuePair_int__long___o* reward, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleTrack__Reward_2223cd4
               (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9bdcf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2b08);
    FUN_02132f7c(PTR_DAT_04cb2b10);
    FUN_02132f7c(PTR_DAT_04cb2b18);
    FUN_02132f7c(PTR_DAT_04cb2b20);
    FUN_02132f7c(PTR_DAT_04cb2b28);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    bRam0000000004f9bdcf = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,8);
  puVar1 = PTR_DAT_04cb2b28;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb2b28 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b28,*(undefined8 *)(*plVar3 + 0x40)),
     lVar4 == 0)) {
LAB_02323fc8:
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  puVar2 = PTR_DAT_04cb2b10;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    lVar4 = *(long *)puVar2;
    if ((lVar4 != 0) &&
       (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_02323fc8;
    puVar1 = PTR_DAT_04cb2b30;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = *(long *)puVar2;
      thunk_FUN_02134474();
      lVar4 = *(long *)puVar1;
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_02323fc8;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = *(long *)puVar1;
        thunk_FUN_02134474();
        puVar1 = PTR_DAT_04ca9ac8;
        uStack_34 = param_1;
        lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02323fc8;
        puVar2 = PTR_DAT_04cb2b08;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar4;
          thunk_FUN_02134474(plVar3 + 7,lVar4);
          lVar4 = *(long *)puVar2;
          if ((lVar4 != 0) &&
             (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_02323fc8;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = *(long *)puVar2;
            thunk_FUN_02134474();
            uStack_38 = param_2;
            lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_02323fc8;
            puVar1 = PTR_DAT_04cb2b18;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_02134474(plVar3 + 9,lVar4);
              lVar4 = *(long *)puVar1;
              if ((lVar4 != 0) &&
                 (lVar4 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
              goto LAB_02323fc8;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = *(long *)puVar1;
                thunk_FUN_02134474();
                lVar4 = Dino_BusSand_App_Meta_BattleRoyaleTrack__RewardItems_2225764(param_3);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_02323fc8;
                puVar2 = PTR_DAT_04cb2b20;
                puVar1 = PTR_DAT_04cac5c0;
                if ((*(uint *)(plVar3 + 3) & 0xfffffff8) != 0) {
                  plVar3[0xb] = lVar4;
                  thunk_FUN_02134474(plVar3 + 0xb,lVar4);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar2,plVar3,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

