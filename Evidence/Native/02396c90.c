/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$U32
uint32_t Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U32 (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$U32
   uint32_t Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U32
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U32_2296c90(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04();
  iVar2 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(param_1);
  iVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(param_1);
  iVar4 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(param_1);
  return uVar1 | iVar2 << 8 | iVar3 << 0x10 | iVar4 << 0x18;
}

