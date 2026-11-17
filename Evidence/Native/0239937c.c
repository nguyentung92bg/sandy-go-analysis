/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Fail
Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail (Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* r, Dino_BusSand_Core_StageEngine_o* e, Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp_o* op, System_String_o* what, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Fail
   Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o*
   Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail
   (Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* r, Dino_BusSand_Core_StageEngine_o* e,
   Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp_o* op, System_String_o* what, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_Journey_JourneyReplay__Fail_229937c
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000004f9c210 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb5738);
    FUN_02132f7c(PTR_DAT_04cb5740);
    FUN_02132f7c(PTR_DAT_04cb5748);
    bRam0000000004f9c210 = 1;
  }
  puVar1 = PTR_DAT_04caa038;
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    lVar3 = FUN_02133068(*(undefined8 *)puVar1,6);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cb5740;
        thunk_FUN_02134474();
        if (param_3 == 0) goto LAB_02399528;
        uVar4 = System_Int32__ToString_482d750(param_3 + 0x10,0);
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),uVar4);
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cb5738;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30));
            uVar4 = System_Int64__ToString_482e7e4(param_3 + 0x20,0);
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar3 + 0x38) = uVar4;
              thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),uVar4);
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04cb5748;
                thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40));
                if (5 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x48) = param_4;
                  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x48),param_4);
                  uVar4 = System_String__Concat_46d31f0(lVar3,0);
                    /* try { // try from 023994fc to 02499503 has its CatchHandler @ 0239963c */
                  *(undefined8 *)(param_1 + 0x18) = uVar4;
                  thunk_FUN_02134474();
                    /* try { // try from 02399510 to 0249951b has its CatchHandler @ 0239962c */
                    /* try { // try from 02399520 to 02499527 has its CatchHandler @ 02399630 */
                  if ((param_2 != 0) && (param_1 != 0)) {
                    lVar3 = *(long *)(param_2 + 0x28);
                    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x78);
                    if (lVar3 != 0) {
                      uVar2 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(lVar3,0);
                      lVar3 = *(long *)(param_2 + 0x18);
                      *(undefined4 *)(param_1 + 0x30) = uVar2;
                      if (lVar3 != 0) {
                        lVar5 = *(long *)(param_2 + 0x20);
                        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar3 + 0x70);
                        if (lVar5 != 0) {
                          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar5 + 0x38);
                          *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x80);
                          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x84);
                          return param_1;
                        }
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02399528:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

