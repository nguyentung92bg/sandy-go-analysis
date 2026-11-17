/* IL2CPP: Dino.BusSand.RenderQuality$$set_Tier
void Dino_BusSand_RenderQuality__set_Tier (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$set_Tier
   void Dino_BusSand_RenderQuality__set_Tier (int32_t value, const MethodInfo* method); */

void Dino_BusSand_RenderQuality__set_Tier_2389f60(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb27f8;
                    /* try { // try from 02489f70 to 02589f7f has its CatchHandler @ 02489f80 */
  if ((bRam0000000004f9c88c & 1) == 0) {
                    /* catch() { ... } // from try @ 02489f14 with catch @ 02489f80
                       catch() { ... } // from try @ 02489f70 with catch @ 02489f80 */
                    /* try { // try from 02489f84 to 02589f87 has its CatchHandler @ 02489f90 */
                    /* try { // try from 02489f88 to 02589f93 has its CatchHandler @ 02489ed8 */
    FUN_02132f7c(PTR_DAT_04cb27f8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02489f84 with catch @ 02489f90
                        */
    bRam0000000004f9c88c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  **(undefined4 **)(lVar2 + 0xb8) = param_1;
  return;
}

