/* IL2CPP: Dino.BusSand.RenderQuality$$get_Tier
int32_t Dino_BusSand_RenderQuality__get_Tier (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$get_Tier
   int32_t Dino_BusSand_RenderQuality__get_Tier (const MethodInfo* method); */

undefined4 Dino_BusSand_RenderQuality__get_Tier_2389f08(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb27f8;
                    /* try { // try from 02489f14 to 02589f2b has its CatchHandler @ 02489f80 */
  if ((bRam0000000004f9c88b & 1) == 0) {
                    /* try { // try from 02489f2c to 02589f6f has its CatchHandler @ 02489ed8 */
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c88b = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined4 **)(lVar2 + 0xb8);
}

