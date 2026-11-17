/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$.cctor
void Dino_BusSand_App_UI_ScreenCover___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$.cctor
   void Dino_BusSand_App_UI_ScreenCover___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenCover___cctor_21fcff0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cb1a18;
  puVar2 = PTR_DAT_04cb1a10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fcf58 with catch @ 022fcff0
                        */
  puVar1 = PTR_DAT_04cb19a8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fcf3c with catch @ 022fd000
                        */
  if ((bRam0000000004f9bc71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1a18);
    FUN_02132f7c(PTR_DAT_04cb1a10);
    FUN_02132f7c(PTR_DAT_04cb19a8);
    bRam0000000004f9bc71 = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
  **(undefined1 **)(*(long *)puVar1 + 0xb8) = 1;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

