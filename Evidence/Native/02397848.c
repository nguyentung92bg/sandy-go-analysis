/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelOp$$ToString
System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp__ToString (Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelOp$$ToString
   System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp__ToString
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp__ToString_2297848(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  puVar3 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c205 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb5610);
    FUN_02132f7c(PTR_DAT_04cb5618);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04caa6a8);
    FUN_02132f7c(PTR_DAT_04cb5620);
    bRam0000000004f9c205 = 1;
  }
  plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar3,8);
  puVar3 = PTR_DAT_04ca9ac8;
  uStack_44 = *(undefined4 *)(param_1 + 0x10);
  lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_44);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_02397b94:
    uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar9,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    thunk_FUN_02134474(plVar6 + 4,lVar7);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    lVar7 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&uStack_50);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_02397b94;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar7;
      thunk_FUN_02134474(plVar6 + 5,lVar7);
      uStack_58 = *(undefined8 *)(param_1 + 0x28);
      lVar7 = FUN_02133100(*(undefined8 *)(puVar3 + 0x68),&uStack_58);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_02397b94;
      puVar5 = PTR_DAT_04cb5620;
      puVar4 = PTR_DAT_04caa6a8;
      plVar2 = (long *)PTR_DAT_04ca9c30;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        thunk_FUN_02134474(plVar6 + 6,lVar7);
        uVar9 = *(undefined8 *)puVar5;
        plVar1 = plVar2;
        if (*(char *)(param_1 + 0x30) != '\0') {
          plVar1 = (long *)puVar4;
        }
        lVar7 = *plVar1;
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_02397b94;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
          plVar6[7] = lVar7;
          thunk_FUN_02134474(plVar6 + 7,lVar7);
          uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(param_1 + 0x14));
          lVar7 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_50);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_02397b94;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            thunk_FUN_02134474(plVar6 + 8,lVar7);
            uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_1 + 0x18));
            lVar7 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_02397b94;
            puVar3 = PTR_DAT_04cb5618;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              thunk_FUN_02134474(plVar6 + 9,lVar7);
              if (*(char *)(param_1 + 0x44) != '\0') {
                plVar2 = (long *)puVar3;
              }
              lVar7 = *plVar2;
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_02397b94;
              puVar4 = PTR_DAT_04cb5610;
              puVar3 = PTR_DAT_04cae4f8;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                thunk_FUN_02134474(plVar6 + 10,lVar7);
                lVar7 = System_String__Join_long__28c86d4
                                  (*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x38),
                                   *(undefined8 *)puVar4);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_02397b94;
                if ((*(uint *)(plVar6 + 3) & 0xfffffff8) != 0) {
                  plVar6[0xb] = lVar7;
                  thunk_FUN_02134474(plVar6 + 0xb,lVar7);
                  System_String__Format_46d3570(uVar9,plVar6,0);
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

