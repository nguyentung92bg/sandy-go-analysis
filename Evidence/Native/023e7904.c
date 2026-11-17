/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$.cctor
void Dino_BusSand_App_UI_HomeEntries___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeEntries$$.cctor
   void Dino_BusSand_App_UI_HomeEntries___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeEntries___cctor_22e7904(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cb73f0;
  puVar2 = PTR_DAT_04cb73e8;
  puVar1 = PTR_DAT_04caf600;
  if ((bRam0000000004f9c42f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf600);
    FUN_02132f7c(PTR_DAT_04cb73f0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023e78d8 with catch @ 023e7954
                        */
    FUN_02132f7c(PTR_DAT_04cb73e8);
    bRam0000000004f9c42f = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 023e796c to 024e7983 has its CatchHandler @ 023e79d8 */
  System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)puVar3);
                    /* try { // try from 023e7984 to 024e79c7 has its CatchHandler @ 023e7834 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

