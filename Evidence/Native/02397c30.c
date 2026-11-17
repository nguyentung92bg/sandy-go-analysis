/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelStream$$get_End
Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream__get_End (Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.LevelStream$$get_End
   Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp_o*
   Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream__get_End
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream__get_End_2297c30(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((bRam0000000004f9c208 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5530);
    FUN_02132f7c(PTR_DAT_04cb5628);
    bRam0000000004f9c208 = 1;
  }
  puVar2 = PTR_DAT_04cb5628;
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      return 0;
    }
    lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar3,*(int *)(lVar3 + 0x18) + -1,*(undefined8 *)PTR_DAT_04cb5628);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x14) != 7) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x50);
      if (lVar3 != 0) {
        uVar1 = *(int *)(lVar3 + 0x18) - 1;
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
          System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
                    (0,uVar1,*(undefined8 *)puVar2);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        return *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

