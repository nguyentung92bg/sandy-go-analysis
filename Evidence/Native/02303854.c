/* IL2CPP: Dino.BusSand.App.Meta.Economy$$CampaignUnlockLevel
int32_t Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$CampaignUnlockLevel
   int32_t Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel (int32_t item, const MethodInfo*
   method); */

ulong Dino_BusSand_App_Meta_Economy__CampaignUnlockLevel_2203854(int param_1)

{
  ulong uVar1;
  
  if ((bRam0000000004f9bcbc & 1) == 0) {
                    /* try { // try from 02303870 to 0240387b has its CatchHandler @ 023038dc */
    FUN_02132f7c(PTR_DAT_04cac440);
                    /* try { // try from 0230387c to 024038b3 has its CatchHandler @ 02303838 */
    bRam0000000004f9bcbc = 1;
  }
  if (param_1 == 0x3eb) {
    return 0x7fffffff;
  }
  if (param_1 == 0x2711) {
    return 0x7fffffff;
  }
  if (param_1 - 0x2712U < 4) {
    uVar1 = Dino_BusSand_App_Meta_Monetization__UnlockLevel_2265fd8(param_1,0);
                    /* try { // try from 023038b4 to 024038c7 has its CatchHandler @ 023038dc */
    if (0 < (int)uVar1) {
      return uVar1;
    }
                    /* try { // try from 023038c8 to 024038df has its CatchHandler @ 02303838 */
    if (*(int *)(*(long *)PTR_DAT_04cac440 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303870 with catch @ 023038dc
                       catch(type#1 @ 00000000) { ... } // from try @ 023038b4 with catch @ 023038dc
                        */
                    /* try { // try from 023038e0 to 0240390f has its CatchHandler @ 023038e0
                       catch(type#1 @ 00000000) { ... } // from try @ 023038e0 with catch @ 023038e0
                       catch(type#1 @ 00000000) { ... } // from try @ 0230391c with catch @ 023038e0
                       catch(type#1 @ 00000000) { ... } // from try @ 02303964 with catch @ 023038e0
                        */
    if (param_1 - 0x2712U < 4) {
      return (ulong)*(uint *)(&UNK_00e6b340 + (ulong)(param_1 - 0x2712U) * 4);
    }
  }
  return 1;
}

