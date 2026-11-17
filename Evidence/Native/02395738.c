/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$VarLen
int32_t Dino_BusSand_App_Meta_Journey_JourneyBytes__VarLen (uint64_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$VarLen
   int32_t Dino_BusSand_App_Meta_Journey_JourneyBytes__VarLen (uint64_t v, const MethodInfo*
   method); */

int Dino_BusSand_App_Meta_Journey_JourneyBytes__VarLen_2295738(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 < 0x80) {
    return 1;
  }
  iVar1 = 1;
  do {
    uVar2 = param_1 >> 0xe;
    param_1 = param_1 >> 7;
    iVar1 = iVar1 + 1;
  } while (uVar2 != 0);
  return iVar1;
}

