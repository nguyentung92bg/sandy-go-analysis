/* IL2CPP: Dino.Tracking.ConnectionTypeMapper$$Map
System_String_o* Dino_Tracking_ConnectionTypeMapper__Map (int32_t reachability, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ConnectionTypeMapper$$Map
   System_String_o* Dino_Tracking_ConnectionTypeMapper__Map (int32_t reachability, const MethodInfo*
   method); */

undefined8 Dino_Tracking_ConnectionTypeMapper__Map_2480d34(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined8 *)PTR_DAT_04cc22b0;
  puVar2 = (undefined8 *)PTR_DAT_04cc22a8;
  puVar3 = PTR_DAT_04cad1a8;
  if ((bRam0000000004f9cfa3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc22a8);
    FUN_02132f7c(PTR_DAT_04cc22b0);
    FUN_02132f7c(PTR_DAT_04cad1a8);
    bRam0000000004f9cfa3 = 1;
  }
  if (param_1 != 2) {
    puVar1 = (undefined8 *)puVar3;
  }
  if (param_1 != 1) {
    puVar2 = puVar1;
  }
  return *puVar2;
}

