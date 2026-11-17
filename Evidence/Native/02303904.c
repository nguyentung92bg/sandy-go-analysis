/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$.cctor
void Dino_BusSand_App_Meta_BoosterIntro___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BoosterIntro$$.cctor
   void Dino_BusSand_App_Meta_BoosterIntro___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_BoosterIntro___cctor_2203904(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cb1d08;
  puVar2 = PTR_DAT_04cb1c70;
  puVar1 = PTR_DAT_04caec70;
                    /* try { // try from 02303910 to 0240391b has its CatchHandler @ 02303978 */
                    /* try { // try from 0230391c to 0240394f has its CatchHandler @ 023038e0 */
  if ((bRam0000000004f9bcb6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04caec70);
                    /* try { // try from 02303950 to 02403963 has its CatchHandler @ 02303978 */
    FUN_02132f7c(PTR_DAT_04cb1d08);
    bRam0000000004f9bcb6 = 1;
  }
                    /* try { // try from 02303964 to 0240397b has its CatchHandler @ 023038e0 */
  uVar4 = FUN_02133068(*(undefined8 *)puVar1,4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02303910 with catch @ 02303978
                       catch(type#1 @ 00000000) { ... } // from try @ 02303950 with catch @ 02303978
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
            (uVar4,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
                    /* try { // try from 02303990 to 024039bf has its CatchHandler @ 023039c0 */
  uVar5 = *(ulong *)(*(long *)puVar2 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

