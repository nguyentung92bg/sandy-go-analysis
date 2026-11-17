/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$.cctor
void Dino_BusSand_App_UI_ScreenSafe___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$.cctor
   void Dino_BusSand_App_UI_ScreenSafe___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenSafe___cctor_21ffb1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_04cb1a88;
  puVar1 = PTR_DAT_04cafcc0;
  if ((bRam0000000004f9bc87 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1a88);
                    /* try { // try from 022ffb50 to 023ffb57 has its CatchHandler @ 022ffea4 */
    FUN_02132f7c(PTR_DAT_04cafcc0);
    bRam0000000004f9bc87 = 1;
  }
                    /* try { // try from 022ffb60 to 023ffb73 has its CatchHandler @ 022ffe48 */
  uVar3 = FUN_02133068(*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  *puVar4 = uVar3;
                    /* try { // try from 022ffb7c to 023ffb83 has its CatchHandler @ 022ffe3c */
  thunk_FUN_02134474(puVar4,uVar3);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) =
       *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
                    /* try { // try from 022ffb94 to 023ffbcb has its CatchHandler @ 022ffecc */
  thunk_FUN_02134474();
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = 0xffffffff;
  return;
}

