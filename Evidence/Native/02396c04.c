/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$U8
int32_t Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8 (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$U8
   int32_t Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, const MethodInfo* method); */

undefined1 Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar5 + 0x18);
  if ((int)uVar2 < (int)uVar1) {
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (uVar2 < uVar1) {
      return *(undefined1 *)(lVar5 + (int)uVar2 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  thunk_FUN_021985a8(PTR_DAT_04cb3f78);
  uVar3 = thunk_FUN_0216e89c();
  uVar4 = thunk_FUN_021985a8(PTR_DAT_04cb5570);
  System_FormatException___ctor_4818b54(uVar3,uVar4,0);
  uVar4 = thunk_FUN_021985a8(PTR_DAT_04cb5578);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar3,uVar4);
}

