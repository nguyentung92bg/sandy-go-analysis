/* IL2CPP: Dino.BusSand.Core.BusFootprint$$Parse
int32_t Dino_BusSand_Core_BusFootprint__Parse (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusFootprint$$Parse
   int32_t Dino_BusSand_Core_BusFootprint__Parse (System_String_o* s, const MethodInfo* method); */

undefined4 Dino_BusSand_Core_BusFootprint__Parse_241148c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_04cbe578;
  if ((bRam0000000004f9cb4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe580);
    FUN_02132f7c(PTR_DAT_04cbe578);
    bRam0000000004f9cb4b = 1;
  }
  uVar2 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar1,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cbe580,0);
    uVar3 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

