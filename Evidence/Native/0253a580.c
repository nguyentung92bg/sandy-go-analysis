/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<>c$$.cctor
void Dino_BusSand_Sdk_SandBusTrackingProvider___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<>c$$.cctor
   void Dino_BusSand_Sdk_SandBusTrackingProvider___c___cctor (const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider___c___cctor_243a580(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cbf3f0;
  if ((bRam0000000004f9cc6b & 1) == 0) {
                    /* try { // try from 0253a5a4 to 0263a5c7 has its CatchHandler @ 0253aab4 */
    FUN_02132f7c(PTR_DAT_04cbf3f0);
    bRam0000000004f9cc6b = 1;
  }
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 0253a5dc to 0263a5e3 has its CatchHandler @ 0253aaa8 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

