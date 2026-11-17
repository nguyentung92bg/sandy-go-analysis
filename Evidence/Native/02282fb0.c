/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs.Template$$.ctor
void Dino_BusSand_App_UI_KitPrefabs_Template___ctor (Dino_BusSand_App_UI_KitPrefabs_Template_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs.Template$$.ctor
   void Dino_BusSand_App_UI_KitPrefabs_Template___ctor (Dino_BusSand_App_UI_KitPrefabs_Template_o*
   __this, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_UI_KitPrefabs_Template___ctor_2182fb0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_04cad778;
  puVar3 = PTR_DAT_04cad770;
  puVar2 = PTR_DAT_04cad768;
  puVar1 = PTR_DAT_04cad760;
  if ((bRam0000000004f9b93b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad778);
    FUN_02132f7c(PTR_DAT_04cad768);
    FUN_02132f7c(PTR_DAT_04cad760);
    FUN_02132f7c(PTR_DAT_04cad770);
    bRam0000000004f9b93b = 1;
  }
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_ValueTuple_int__object__int___int____ctor_338ef28
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary_int__ValueTuple_object__object_____ctor_34059c0
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x40),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
                    /* catch(type#2 @ 04ca20c8) { ... } // from try @ 02282f84 with catch @ 02283074
                        */
  return auVar6;
}

