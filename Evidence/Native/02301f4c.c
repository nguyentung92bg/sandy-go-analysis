/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$OpenStore
void Dino_BusSand_App_Meta_AppUpdate__OpenStore (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$OpenStore
   void Dino_BusSand_App_Meta_AppUpdate__OpenStore (const MethodInfo* method); */

void Dino_BusSand_App_Meta_AppUpdate__OpenStore_2201f4c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 02301ec0 with catch @ 02301f4c */
  puVar1 = PTR_DAT_04cb1c08;
                    /* catch() { ... } // from try @ 02302008 with catch @ 02301f60 */
  if ((bRam0000000004f9bcad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c08);
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cb1c20);
    bRam0000000004f9bcad = 1;
  }
  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                    /* try { // try from 02301fa0 to 02401fef has its CatchHandler @ 0230202c */
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
                    /* catch() { ... } // from try @ 02301fa0 with catch @ 0230202c */
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Application__get_identifier_43526b4(0);
  lVar3 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1c20,uVar2,0);
  uVar2 = 0;
  if ((bRam0000000004fa5a69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210,0);
    FUN_02132f7c(PTR_DAT_04cf5680);
    FUN_02132f7c(PTR_DAT_04cd5630);
    bRam0000000004fa5a69 = 1;
    uVar2 = extraout_x1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (lVar3 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else if (*(int *)(lVar3 + 0x10) == 0) {
    uVar2 = System_UIntPtr__op_Explicit_488617c(1,0);
    uVar2 = System_UIntPtr__op_Explicit_4886184(uVar2,0);
    uStack_30 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_30,uVar2,0,0);
    uStack_48 = uStack_28;
    uStack_50 = uStack_30;
  }
  else {
    if (cRam0000000004fa1b52 == '\0') {
      FUN_02132f7c(PTR_DAT_04cc73d8,uVar2);
      cRam0000000004fa1b52 = '\x01';
    }
    uStack_40 = System_String__GetRawStringData_46cfab8(lVar3,0);
    uStack_38 = (ulong)*(uint *)(lVar3 + 0x10);
    uVar2 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                      (&uStack_40,*(undefined8 *)PTR_DAT_04cf5680);
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
              (&uStack_50,uVar2,uStack_38 & 0xffffffff,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (pcRam0000000004fa5b18 == (code *)0x0) {
    pcRam0000000004fa5b18 = (code *)FUN_02132f40(&UNK_00e5e6a0);
  }
  (*pcRam0000000004fa5b18)(&uStack_50);
  return;
}

