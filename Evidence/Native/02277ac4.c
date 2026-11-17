/* IL2CPP: Dino.BusSand.App.Ads$$.cctor
void Dino_BusSand_App_Ads___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$.cctor
   void Dino_BusSand_App_Ads___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Ads___cctor_2177ac4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_04cacf40;
  puVar2 = PTR_DAT_04cabaa8;
  puVar1 = PTR_DAT_04ca9c30;
                    /* catch() { ... } // from try @ 02277ab0 with catch @ 02277aec */
  if ((bRam0000000004f9b8ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cacf40);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b8ec = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 02277b28 to 02377c23 has its CatchHandler @ 02277b28
                       catch() { ... } // from try @ 02277b28 with catch @ 02277b28
                       catch() { ... } // from try @ 02277c30 with catch @ 02277b28 */
  System_Object___ctor_4870e5c(uVar4,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  uVar4 = NEON_fmov(0xbf800000,4);
  lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)puVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar4;
  thunk_FUN_02134474();
  puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
  *puVar6 = *(undefined8 *)puVar1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

