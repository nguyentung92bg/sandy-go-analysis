/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Snap
Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* Dino_BusSand_App_Meta_Journey_JourneyReplay__Snap (Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* r, Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyReplay$$Snap
   Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o*
   Dino_BusSand_App_Meta_Journey_JourneyReplay__Snap
   (Dino_BusSand_App_Meta_Journey_JourneyReplay_Result_o* r, Dino_BusSand_Core_StageEngine_o* e,
   const MethodInfo* method); */

long Dino_BusSand_App_Meta_Journey_JourneyReplay__Snap_22995b8(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar2 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x78);
    if (lVar2 != 0) {
      uVar1 = Dino_BusSand_Core_TruckGrid__get_Count_24236a8(lVar2,0);
      lVar2 = *(long *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      if (lVar2 != 0) {
        lVar3 = *(long *)(param_2 + 0x20);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar2 + 0x70);
        if (lVar3 != 0) {
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
                    /* try { // try from 02399614 to 02499617 has its CatchHandler @ 02399638 */
          *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x80);
                    /* try { // try from 02399618 to 0249961b has its CatchHandler @ 02399634 */
                    /* try { // try from 0239961c to 0249961f has its CatchHandler @ 02399624 */
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x84);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02399568 with catch @ 02399620
                       try { // try from 02399620 to 02499657 has its CatchHandler @ 02398ecc */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0239961c with catch @ 02399624
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0239952c with catch @ 02399628
                        */
          return param_1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02399510 with catch @ 0239962c
                        */
  FUN_02133224();
}

