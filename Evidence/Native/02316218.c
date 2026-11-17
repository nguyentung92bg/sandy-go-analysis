/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ResourceType
System_String_o* Dino_BusSand_App_Meta_GameTracking__ResourceType (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ResourceType
   System_String_o* Dino_BusSand_App_Meta_GameTracking__ResourceType (int32_t id, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_GameTracking__ResourceType_2216218(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04cb2530;
  puVar1 = (undefined8 *)PTR_DAT_04cb2130;
  puVar2 = (undefined8 *)PTR_DAT_04caa840;
  if ((bRam0000000004f9bd59 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2130);
    FUN_02132f7c(PTR_DAT_04cb2530);
    FUN_02132f7c(PTR_DAT_04caa840);
    bRam0000000004f9bd59 = 1;
  }
  if (param_1 != 0x3ea) {
    puVar1 = (undefined8 *)puVar3;
  }
  if (param_1 != 0x3e9) {
    puVar2 = puVar1;
  }
  return *puVar2;
}

