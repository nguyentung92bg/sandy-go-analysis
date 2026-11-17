/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.UiStep$$ToString
System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStep__ToString (Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStep_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.UiStep$$ToString
   System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStep__ToString
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStep_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStep__ToString_2297cd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c20a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb5610);
    FUN_02132f7c(PTR_DAT_04cb5630);
    FUN_02132f7c(PTR_DAT_04cae4f8);
    bRam0000000004f9c20a = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,6);
  puVar1 = PTR_DAT_04ca9ac8;
  uStack_34 = *(undefined4 *)(param_1 + 0x10);
  lVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 02397d6c to 02498153 has its CatchHandler @ 02397d6c
                       catch() { ... } // from try @ 02397d6c with catch @ 02397d6c
                       catch() { ... } // from try @ 023981b4 with catch @ 02397d6c
                       catch() { ... } // from try @ 0239821c with catch @ 02397d6c
                       catch() { ... } // from try @ 02398258 with catch @ 02397d6c
                       catch() { ... } // from try @ 02398284 with catch @ 02397d6c */
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_02397f38:
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_02134474(plVar3 + 4,lVar4);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&uStack_40);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_02397f38;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar4;
      thunk_FUN_02134474(plVar3 + 5,lVar4);
      uStack_44 = *(undefined4 *)(param_1 + 0x14);
      lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_44);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_02397f38;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_02134474(plVar3 + 6,lVar4);
        uStack_48 = *(undefined4 *)(param_1 + 0x18);
        lVar4 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_48);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02397f38;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar4;
          thunk_FUN_02134474(plVar3 + 7,lVar4);
          lVar4 = *(long *)(param_1 + 0x28);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_02397f38;
          puVar2 = PTR_DAT_04cb5610;
          puVar1 = PTR_DAT_04cae4f8;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_02134474(plVar3 + 8,lVar4);
            lVar4 = System_String__Join_long__28c86d4
                              (*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x30),
                               *(undefined8 *)puVar2);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_02397f38;
            puVar1 = PTR_DAT_04cb5630;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_02134474(plVar3 + 9,lVar4);
              System_String__Format_46d3570(*(undefined8 *)puVar1,plVar3,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

