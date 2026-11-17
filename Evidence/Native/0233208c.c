/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$IsFixedCyclePack
bool Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack (Dino_BusSand_App_Meta_GiftPackConfig_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$IsFixedCyclePack
   bool Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack
   (Dino_BusSand_App_Meta_GiftPackConfig_o* c, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = false;
  if (param_1 != 0) {
                    /* try { // try from 023320ac to 024320b7 has its CatchHandler @ 023322b0 */
                    /* try { // try from 023320bc to 024320c7 has its CatchHandler @ 023324d8 */
    if (((*(int *)(param_1 + 0x44) < 0) ||
        (uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(*(undefined8 *)(param_1 + 0x78),0),
        (uVar2 & 1) != 0)) ||
       (uVar2 = System_String__IsNullOrWhiteSpace_46d20a0(*(undefined8 *)(param_1 + 0x80),0),
       (uVar2 & 1) != 0)) {
      bVar1 = false;
    }
    else if (*(int *)(param_1 + 0x48) == 0) {
      bVar1 = *(int *)(param_1 + 0x4c) != 0;
    }
    else {
      bVar1 = true;
                    /* try { // try from 023320d8 to 024320df has its CatchHandler @ 023322c8 */
    }
  }
  return bVar1;
}

