/* IL2CPP: Dino.BusSand.App.UI.KitBake$$.cctor
void Dino_BusSand_App_UI_KitBake___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitBake$$.cctor
   void Dino_BusSand_App_UI_KitBake___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitBake___cctor_2280970(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_04cb4d28;
  puVar4 = PTR_DAT_04cb4d20;
  puVar3 = PTR_DAT_04cb4d18;
  puVar2 = PTR_DAT_04cb4d10;
  puVar1 = PTR_DAT_04cb4ce0;
  if ((bRam0000000004f9c140 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4d28);
    FUN_02132f7c(PTR_DAT_04cb4d18);
    FUN_02132f7c(PTR_DAT_04cb4d20);
    FUN_02132f7c(PTR_DAT_04cb4d10);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    bRam0000000004f9c140 = 1;
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary_object__KitBake_Made____ctor_34f7c5c
            (uVar6,*(undefined8 *)puVar3);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *puVar7 = uVar6;
  thunk_FUN_02134474(puVar7,uVar6);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
  *puVar7 = uVar6;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

